/********************************************\
  *
  *  Sire - Molecular Simulation Framework
  *
  *  Copyright (C) 2017  Christopher Woods
  *
  *  This program is free software; you can redistribute it and/or modify
  *  it under the terms of the GNU General Public License as published by
  *  the Free Software Foundation; either version 2 of the License, or
  *  (at your option) any later version.
  *
  *  This program is distributed in the hope that it will be useful,
  *  but WITHOUT ANY WARRANTY; without even the implied warranty of
  *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  *  GNU General Public License for more details.
  *
  *  You should have received a copy of the GNU General Public License
  *  along with this program; if not, write to the Free Software
  *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
  *
  *  For full details of the license please see the COPYING file
  *  that should have come with this distribution.
  *
  *  You can contact the authors via the developer's mailing list
  *  at http://siremol.org
  *
\*********************************************/

#include "netcdffile.h"

#include <QFileInfo>
#include <QDebug>

#include "SireError/errors.h"

#ifdef SIRE_USE_NETCDF
    #include "netcdf.h"  // CONDITIONAL_INCLUDE
#endif

using namespace SireIO;

/////////////
///////////// Implemenetation of NetCDFDataInfo
/////////////


#ifdef SIRE_USE_NETCDF
    static QString nc_type_to_string(nc_type typ)
    {
        switch(typ)
        {
        case NC_BYTE:
            return QString("NC_BYTE");
        case NC_UBYTE:
            return QString("NC_UBYTE");
        case NC_CHAR:
            return QString("NC_CHAR");
        case NC_SHORT:
            return QString("NC_SHORT");
        case NC_USHORT:
            return QString("NC_USHORT");
        case NC_INT:
            return QString("NC_INT");
        case NC_UINT:
            return QString("NC_UINT");
        case NC_INT64:
            return QString("NC_INT64");
        case NC_UINT64:
            return QString("NC_UINT64");
        case NC_FLOAT:
            return QString("NC_FLOAT");
        case NC_DOUBLE:
            return QString("NC_DOUBLE");
        case NC_STRING:
            return QString("NC_STRING");
        default:
            return QString("NC_UNKNOWN");
        }
    }

    static int nc_type_to_size(nc_type typ)
    {
        switch(typ)
        {
            case NC_BYTE:
                return 1;
            case NC_UBYTE:
                return 1;
            case NC_CHAR:
                return 1;
            case NC_SHORT:
                return sizeof(short);
            case NC_USHORT:
                return sizeof(short);
            case NC_INT:
                return 4;
            case NC_UINT:
                return 4;
            case NC_INT64:
                return 8;
            case NC_UINT64:
                return 8;
            case NC_FLOAT:
                return 4;
            case NC_DOUBLE:
                return 8;
            case NC_STRING:
                return 1;
            default:
                return 0;
        }
    }

    /*static nc_type string_to_nc_type(const QString &typ)
    {
        if (typ == "NC_BYTE") return NC_BYTE;
        else if (typ == "NC_UBYTE") return NC_UBYTE;
        else if (typ == "NC_CHAR") return NC_CHAR;
        else if (typ == "NC_SHORT") return NC_SHORT;
        else if (typ == "NC_USHORT") return NC_USHORT;
        else if (typ == "NC_INT") return NC_INT;
        else if (typ == "NC_UINT") return NC_UINT;
        else if (typ == "NC_INT64") return NC_INT64;
        else if (typ == "NC_UINT64") return NC_UINT64;
        else if (typ == "NC_FLOAT") return NC_FLOAT;
        else if (typ == "NC_DOUBLE") return NC_DOUBLE;
        else if (typ == "NC_STRING") return NC_STRING;
        else
        {
            throw SireError::io_error( QObject::tr(
                "Unrecognised NetCDF type - %1").arg(typ), CODELOC );
            
            return 0;
        }
    }*/
#endif

static QVector<QVariant> extract_values(const QByteArray &memdata, int nc_type, int nvals)
{
    //ensure there is enough space in the data
    if (nvals > (memdata.count() / nc_type_to_size(nc_type)))
    {
        throw SireError::invalid_arg( QObject::tr(
                "You cannot read %1 values, as the array has only allocated space (%2) "
                "for %3 values of type %4.")
                    .arg(nvals).arg(memdata.count())
                    .arg(memdata.count() / nc_type_to_size(nc_type))
                    .arg(nc_type_to_string(nc_type)), CODELOC );
    }
    
    QVector<QVariant> vals;
    
    if (nvals > 0)
    {
    #ifdef SIRE_USE_NETCDF
        vals = QVector<QVariant>(nvals);
        
        const char *data = memdata.constData();

        switch(nc_type)
        {
            case NC_BYTE:
            case NC_UBYTE:
                for (int i=0; i<nvals; ++i)
                {
                    vals.append( memdata[i] );
                }
                break;
            case NC_CHAR:
                for (int i=0; i<nvals; ++i)
                {
                    vals.append( memdata[i] );
                }
                break;
            case NC_SHORT:
                for (int i=0; i<nvals; ++i)
                {
                    vals.append( qint32( *(reinterpret_cast<const short*>(data) + i) ) );
                }
                break;
            case NC_USHORT:
                for (int i=0; i<nvals; ++i)
                {
                    vals.append( quint32( *(reinterpret_cast<const unsigned short*>(data) + i) ) );
                }
                break;
            case NC_INT:
                for (int i=0; i<nvals; ++i)
                {
                    vals.append( qint32( *(reinterpret_cast<const qint32*>(data) + i) ) );
                }
                break;
            case NC_UINT:
                for (int i=0; i<nvals; ++i)
                {
                    vals.append( quint32( *(reinterpret_cast<const quint32*>(data) + i) ) );
                }
                break;
            case NC_INT64:
                for (int i=0; i<nvals; ++i)
                {
                    vals.append( qint64( *(reinterpret_cast<const qint64*>(data) + i) ) );
                }
                break;
            case NC_UINT64:
                for (int i=0; i<nvals; ++i)
                {
                    vals.append( quint32( *(reinterpret_cast<const quint64*>(data) + i) ) );
                }
                break;
            case NC_FLOAT:
                for (int i=0; i<nvals; ++i)
                {
                    vals.append( float( *(reinterpret_cast<const float*>(data) + i) ) );
                }
                break;
            case NC_DOUBLE:
                for (int i=0; i<nvals; ++i)
                {
                    vals.append( double( *(reinterpret_cast<const double*>(data) + i) ) );
                }
                break;
            case NC_STRING:
            default:
                break;
        }

    #endif
    }
    
    return vals;
}

static QVariant extract_value(const QByteArray &memdata, int nc_type)
{
    //see if this is a single value or an array
    int nvals = memdata.count() / nc_type_to_size(nc_type);

    if (nvals > 0)
    {
    #ifdef SIRE_USE_NETCDF
        
        const char *data = memdata.constData();
        
        switch(nc_type)
        {
            case NC_BYTE:
            case NC_UBYTE:
                return QVariant(memdata);
            case NC_CHAR:
                return QVariant( QString::fromUtf8(data) );
            case NC_SHORT:
                if (nvals > 1)
                {
                    QList<QVariant> vals;
                    for (int i=0; i<nvals; ++i)
                    {
                        vals.append( qint32( *(reinterpret_cast<const short*>(data) + i) ) );
                    }
                    
                    return QVariant(vals);
                }
                else
                {
                    return QVariant( qint32( *(reinterpret_cast<const short*>(data)) ) );
                }
            case NC_USHORT:
                if (nvals > 1)
                {
                    QList<QVariant> vals;
                    for (int i=0; i<nvals; ++i)
                    {
                        vals.append( quint32( *(
                                reinterpret_cast<const unsigned short*>(data) + i) ) );
                    }
                    
                    return QVariant(vals);
                }
                else
                {
                    return QVariant( quint32( *(reinterpret_cast<const unsigned short*>(data)) ) );
                }
            case NC_INT:
                if (nvals > 1)
                {
                    QList<QVariant> vals;
                    for (int i=0; i<nvals; ++i)
                    {
                        vals.append( quint32( *(reinterpret_cast<const qint32*>(data) + i) ) );
                    }
                    
                    return QVariant(vals);
                }
                else
                {
                    return QVariant( *(reinterpret_cast<const qint32*>(data)) );
                }
            case NC_UINT:
                if (nvals > 1)
                {
                    QList<QVariant> vals;
                    for (int i=0; i<nvals; ++i)
                    {
                        vals.append( quint32( *(reinterpret_cast<const quint32*>(data) + i) ) );
                    }
                    
                    return QVariant(vals);
                }
                else
                {
                    return QVariant( *(reinterpret_cast<const quint32*>(data)) );
                }
            case NC_INT64:
                if (nvals > 1)
                {
                    QList<QVariant> vals;
                    for (int i=0; i<nvals; ++i)
                    {
                        vals.append( qint64( *(reinterpret_cast<const qint64*>(data) + i) ) );
                    }
                    
                    return QVariant(vals);
                }
                else
                {
                    return QVariant( *(reinterpret_cast<const qint64*>(data)) );
                }
            case NC_UINT64:
                if (nvals > 1)
                {
                    QList<QVariant> vals;
                    for (int i=0; i<nvals; ++i)
                    {
                        vals.append( quint64( *(reinterpret_cast<const quint64*>(data) + i) ) );
                    }
                    
                    return QVariant(vals);
                }
                else
                {
                    return QVariant( *(reinterpret_cast<const quint64*>(data)) );
                }
            case NC_FLOAT:
                if (nvals > 1)
                {
                    QList<QVariant> vals;
                    for (int i=0; i<nvals; ++i)
                    {
                        vals.append( float( *(reinterpret_cast<const float*>(data) + i) ) );
                    }
                    
                    return QVariant(vals);
                }
                else
                {
                    return QVariant( *(reinterpret_cast<const float*>(data)) );
                }
            case NC_DOUBLE:
                if (nvals > 1)
                {
                    QList<QVariant> vals;
                    for (int i=0; i<nvals; ++i)
                    {
                        vals.append( double( *(reinterpret_cast<const double*>(data) + i) ) );
                    }
                    
                    return QVariant(vals);
                }
                else
                {
                    return QVariant( *(reinterpret_cast<const double*>(data)) );
                }
            case NC_STRING:
            default:
                return QVariant();
        }
    
    #endif
    }
    
    return QVariant();
}

/** Constructor - completely null data type */
NetCDFDataInfo::NetCDFDataInfo() : idnum(-1), xtyp(-1)
{}

/** Internal constructor used by NetCDFFile to construct from the passed data */
NetCDFDataInfo::NetCDFDataInfo(int idn, QString name, int tp,
                               QStringList dim_ns, QList<int> dim_sz,
                               QStringList att_ns, QList<int> att_ts,
                               QList<QVariant> att_vs)
{
    idnum = idn;
    nme = name;
    xtyp = tp;
    dim_names = dim_ns;
    dim_sizes = dim_sz;
    att_names = att_ns;
    att_types = att_ts;
    att_values = att_vs;
    
    if (idnum < 0 or xtyp < 0)
    {
        throw SireError::invalid_arg( QObject::tr(
                "You cannot construct a NetCDFDataInfo with a negative ID number (%1) "
                "or negative xtype (%2).")
                    .arg(idnum).arg(xtyp), CODELOC );
    }
    
    if (dim_names.count() != dim_sizes.count())
    {
        throw SireError::invalid_arg( QObject::tr(
                "The number of dimension names (%1) must equal the number of "
                "dimension sizes (%2)").arg(dim_names.count())
                                       .arg(dim_sizes.count()), CODELOC );
    }
    
    if (att_names.count() != att_types.count() or att_names.count() != att_values.count())
    {
        throw SireError::invalid_arg( QObject::tr(
                "The number of attribute names (%1), types (%2) and values (%3) must "
                "all be equal!").arg(att_names.count())
                                .arg(att_types.count())
                                .arg(att_values.count()), CODELOC );
    }
}

/** Copy constructor */
NetCDFDataInfo::NetCDFDataInfo(const NetCDFDataInfo &other)
               : nme(other.nme), dim_names(other.dim_names), dim_sizes(other.dim_sizes),
                 att_names(other.att_names), att_types(other.att_types),
                 att_values(other.att_values),
                 idnum(other.idnum), xtyp(other.xtyp)
{}

/** Destructor */
NetCDFDataInfo::~NetCDFDataInfo()
{}

/** Return whether or not this data type info is null */
bool NetCDFDataInfo::isNull() const
{
    return idnum == -1;
}

/** Return a string representation of this data info */
QString NetCDFDataInfo::toString() const
{
    if (isNull())
        return QObject::tr("NetCDFDataInfo::null");
    else if (dim_names.isEmpty())
    {
        if (att_names.isEmpty())
        {
            return QObject::tr("NetCDFDataInfo( %1 = %2[%3]() )")
                    .arg(idnum).arg(nme).arg(this->type());
        }
        else
        {
            QStringList atts;
            for (int i=0; i<att_names.count(); ++i)
            {
                atts.append( QString("%1=[%2 - %3]").arg(att_names[i])
                                                    .arg(nc_type_to_string(att_types[i]))
                                                    .arg(att_values[i].toString()) );
            }
            
            return QObject::tr("NetCDFDataInfo( %1 = %2[%3](), attributes:{ %4 } )")
                    .arg(idnum).arg(nme).arg(this->type()).arg(atts.join(", "));
        }
    }
    else
    {
        QStringList dims;
        for (int i=0; i<dim_names.count(); ++i)
        {
            dims.append( QString("%1:%2").arg(dim_names[i]).arg(dim_sizes[i]) );
        }

        if (att_names.isEmpty())
        {
            return QObject::tr("NetCDFDataInfo( %1 = %2[%3](%4) )")
                    .arg(idnum).arg(nme).arg(this->type()).arg(dims.join(","));
        }
        else
        {
            QStringList atts;
            for (int i=0; i<att_names.count(); ++i)
            {
                atts.append( QString("%1=[%2 - %3]").arg(att_names[i])
                                                    .arg(nc_type_to_string(att_types[i]))
                                                    .arg(att_values[i].toString()) );
            }

            return QObject::tr("NetCDFDataInfo( %1 = %2[%3](%4), attributes:{ %5 } )")
                    .arg(idnum).arg(nme).arg(this->type()).arg(dims.join(","))
                    .arg(atts.join(", "));
        }
    }
}

/** Return the data type of this piece of data. This is a string
    version of the NC_TYPE, e.g. NC_FLOAT, NC_STRING etc. */
QString NetCDFDataInfo::type() const
{
    return nc_type_to_string(xtyp);
}

/** Return the size in bytes of a variable of this type */
int NetCDFDataInfo::typeSize() const
{
    return nc_type_to_size(xtyp);
}

/** Return the number of values that should be held by this data */
int NetCDFDataInfo::nValues() const
{
    int base = 1;
    
    for (const auto sz : dim_sizes)
    {
        base *= sz;
    }
    
    return base;
}

/** Return the total size of the data to be loaded, in bytes */
int NetCDFDataInfo::dataSize() const
{
    return typeSize() * nValues();
}

/** Return all of the names of the attributes */
QStringList NetCDFDataInfo::attributeNames() const
{
    return att_names;
}

/** Return the value of the attribute called 'name'. This returns QVariant::null
    if this attribute doesn't exist */
QVariant NetCDFDataInfo::attribute(const QString &name) const
{
    for (int i=0; i<att_names.count(); ++i)
    {
        if (name == att_names[i])
        {
            return att_values[i];
        }
    }

    return QVariant();
}

/** Return the type of the attribute called 'name'. This returns a string version
    of the NC_TYPE of the attribute, i.e. NC_DOUBLE or NC_CHAR. This returns
    an empty string if there is not attribute with this name */
QString NetCDFDataInfo::attributeType(const QString &name) const
{
    for (int i=0; i<att_names.count(); ++i)
    {
        if (name == att_names[i])
        {
            return nc_type_to_string(att_types[i]);
        }
    }

    return QString();
}

/** Return a hash of all of the values of all attributes */
QHash<QString,QVariant> NetCDFDataInfo::attributes() const
{
    QHash<QString,QVariant> atts;
    
    if (not att_names.isEmpty())
    {
        atts.reserve(att_names.count());
        
        for (int i=0; i<att_names.count(); ++i)
        {
            atts.insert(att_names[i], att_values[i]);
        }
    }
    
    return atts;
}

/** Return a hash of all of the attribute types of the attributes */
QHash<QString,QString> NetCDFDataInfo::attributeTypes() const
{
    QHash<QString,QString> atts;
    
    if (not att_names.isEmpty())
    {
        atts.reserve(att_names.count());
        
        for (int i=0; i<att_names.count(); ++i)
        {
            atts.insert(att_names[i], nc_type_to_string(att_types[i]));
        }
    }
    
    return atts;
}

/////////////
///////////// Implemenetation of NetCDFData
/////////////

/** Constructor */
NetCDFData::NetCDFData() : NetCDFDataInfo()
{}

/** Copy constructor */
NetCDFData::NetCDFData(const NetCDFData &other)
           : NetCDFDataInfo(other), memdata(other.memdata)
{}

/** Destructor */
NetCDFData::~NetCDFData()
{}

/** Internal constructor used by NetCDFFile */
NetCDFData::NetCDFData(const NetCDFDataInfo &info)
           : NetCDFDataInfo(info)
{}

/** Internal function used by NetCDFFile to set the data */
void NetCDFData::setData(const QByteArray &data)
{
    memdata = data;
}

/** Return the data as an array of QVariants */
QVector<QVariant> NetCDFData::toArray() const
{
    return extract_values(memdata, xtyp, this->nValues());
}

/** Return the data cast as an array of floats */
QVector<float> NetCDFData::toFloatArray() const
{
    const int nvals = this->nValues();
    QVector<float> values( nvals );
    
    if (xtyp == NC_FLOAT)
    {
        const char *data = memdata.constData();
    
        for (int i=0; i<nvals; ++i)
        {
            values[i] = *(reinterpret_cast<const float*>(data) + i);
        }
    }
    else if (xtyp == NC_DOUBLE)
    {
        const char *data = memdata.constData();
    
        for (int i=0; i<nvals; ++i)
        {
            values[i] = *(reinterpret_cast<const double*>(data) + i);
        }
    }
    else
    {
        //need to go via the QVariant list
        const auto vars = this->toArray();
        
        for (int i=0; i<this->nValues(); ++i)
        {
            values[i] = vars[i].toFloat();
        }
    }
    
    return values;
}

/** Return the data cast as an array of doubles */
QVector<double> NetCDFData::toDoubleArray() const
{
    const int nvals = this->nValues();
    QVector<double> values( nvals );
    
    if (xtyp == NC_FLOAT)
    {
        const char *data = memdata.constData();
    
        for (int i=0; i<nvals; ++i)
        {
            values[i] = *(reinterpret_cast<const float*>(data) + i);
        }
    }
    else if (xtyp == NC_DOUBLE)
    {
        const char *data = memdata.constData();
    
        for (int i=0; i<nvals; ++i)
        {
            values[i] = *(reinterpret_cast<const double*>(data) + i);
        }
    }
    else
    {
        //need to go via the QVariant list
        const auto vars = this->toArray();
        
        for (int i=0; i<this->nValues(); ++i)
        {
            values[i] = vars[i].toDouble();
        }
    }
    
    return values;
}

/////////////
///////////// Implemenetation of NetCDFFile
/////////////

static void assert_no_netcdf_error(int errnum)
{
    #ifdef SIRE_USE_NETCDF
        QString err;
    
        switch(errnum)
        {
            case NC_NOERR:
                return;
            case NC_EHDFERR:
                err = QObject::tr("HDF5 error!");
                break;
            case NC_EDIMMETA:
                err = QObject::tr("NetCDF-4 dimension metadata error!");
                break;
            case NC_EBADID:
                err = QObject::tr("Not a netcdf id");
                break;
            case NC_ENFILE:
                err = QObject::tr("Too many netcdfs open");
                break;
            case NC_EEXIST:
                err = QObject::tr("netcdf file exists");
                break;
            case NC_EINVAL:
                err = QObject::tr("Invalid Argument");
                break;
            case NC_EPERM:
                err = QObject::tr("Write to read only");
                break;
            case NC_ENOTINDEFINE:
                err = QObject::tr("Operation not allowed in data mode");
                break;
            case NC_EINDEFINE:
                err = QObject::tr("Operation not allowed in define mode");
                break;
            case NC_EINVALCOORDS:
                err = QObject::tr("Index exceeds dimension bound");
                break;
            case NC_EMAXDIMS:
                err = QObject::tr("NC_MAX_DIMS exceeded");
                break;
            case NC_ENAMEINUSE:
                err = QObject::tr("String match to name in use");
                break;
            case NC_ENOTATT:
                err = QObject::tr("Attribute not found");
                break;
            case NC_EMAXATTS:
                err = QObject::tr("NC_MAX_ATTRS exceeded");
                break;
            case NC_EBADTYPE:
                err = QObject::tr("Not a netcdf data type");
                break;
            case NC_EBADDIM:
                err = QObject::tr("Invalid dimension id or name");
                break;
            case NC_EUNLIMPOS:
                err = QObject::tr("NC_UNLIMITED in the wrong index");
                break;
            case NC_EMAXVARS:
                err = QObject::tr("NC_MAX_VARS exceeded");
                break;
            case NC_ENOTVAR:
                err = QObject::tr("Variable not found");
                break;
            case NC_EGLOBAL:
                err = QObject::tr("Action prohibited on NC_GLOBAL varid");
                break;
            case NC_ENOTNC:
                err = QObject::tr("Not a netcdf file");
                break;
            case NC_ESTS:
                err = QObject::tr("In Fortran, string too short");
                break;
            case NC_EMAXNAME:
                err = QObject::tr("NC_MAX_NAME exceeded");
                break;
            case NC_EUNLIMIT:
                err = QObject::tr("NC_UNLIMITED size already in use");
                break;
            case NC_ENORECVARS:
                err = QObject::tr("nc_rec op when there are no record vars");
                break;
            case NC_ECHAR:
                err = QObject::tr("Attempt to convert between text & numbers");
                break;
            case NC_EEDGE:
                err = QObject::tr("Edge+start exceeds dimension bound");
                break;
            case NC_ESTRIDE:
                err = QObject::tr("Illegal stride");
                break;
            case NC_EBADNAME:
                err = QObject::tr("Attribute or variable name contains illegal characters");
                break;
            case NC_ERANGE:
                err = QObject::tr("Math result not representable");
                break;
            case NC_ENOMEM:
                err = QObject::tr("Memory allocation (malloc) failure");
                break;
            case NC_EVARSIZE:
                err = QObject::tr("One or more variable sizes violate format constraints");
                break;
            case NC_EDIMSIZE:
                err = QObject::tr("Invalid dimension size");
                break;
            case NC_ETRUNC:
                err = QObject::tr("File likely truncated or possibly corrupted");
                break;
            default:
                err = QObject::tr("NetCDF experienced an unknown error! %1").arg(errnum);
        }
    
        throw SireError::io_error( QObject::tr(
            "NetCDF experienced an error: %1 (%2)").arg(err).arg(errnum), CODELOC );
    #endif
}

/** Constructor */
NetCDFFile::NetCDFFile() : hndl(-1)
{}

/** Function used to call and check the output of netcdf operations */
int NetCDFFile::call_netcdf_function(std::function<int()> func, int ignored_error) const
{
    QMutexLocker lkr( const_cast<QMutex*>(&mutex) );
    int err = func();
    
    if (err != ignored_error)
    {
        assert_no_netcdf_error(err);
    }
    
    return err;
}

/** Construct to open the file 'filename' */
NetCDFFile::NetCDFFile(const QString &filename) : fname(filename)
{
    #ifdef SIRE_USE_NETCDF
        QFileInfo file(filename);
    
        if (not file.exists())
        {
            throw SireError::io_error( QObject::tr(
                    "Cannot open '%1' as it does not appear to exist.")
                        .arg(filename), CODELOC );
        }
    
        QByteArray c_filename = file.absoluteFilePath().toUtf8();
        call_netcdf_function(
            [&](){ return nc_open(c_filename.constData(), NC_NOWRITE, &hndl); }
                            );

    #else
        throw SireError::unsupported( QObject::tr(
                "Software is missing NetCDF support, so cannot read Amber Rst files!"),
                    CODELOC );
    #endif
}

/** Destructor - this will close the NetCDFFile */
NetCDFFile::~NetCDFFile()
{
    #ifdef SIRE_USE_NETCDF
        if (hndl != -1)
        {
            nc_close(hndl);
            hndl = -1;
        }
    #endif
}

/** Return the full set of names and data types for all of the variables
    in the file */
QHash<QString,NetCDFDataInfo> NetCDFFile::getVariablesInfo() const
{
    QHash<QString,NetCDFDataInfo> vars;
    
    #ifdef SIRE_USE_NETCDF
    if (hndl != -1)
    {
        char *tmp_name = new char[NC_MAX_NAME+1];
        int *dim_ids = new int[NC_MAX_VAR_DIMS];
    
        try
        {
            int i=0;
            
            while (true)
            {
                nc_type var_type;
                int ndims;
                int natts;

                if (call_netcdf_function([&](){
                    return nc_inq_var(hndl, i, tmp_name, &var_type, &ndims, dim_ids, &natts); },
                    NC_ENOTVAR) == NC_ENOTVAR)
                {
                    break;
                }

                QString var_name = QString::fromUtf8(tmp_name);

                QStringList dim_names;
                QList<int> dim_sizes;

                for (int j=0; j<ndims; ++j)
                {
                    size_t dim_len;
                    call_netcdf_function([&](){
                        return nc_inq_dim(hndl, dim_ids[j], tmp_name, &dim_len);});
                    
                    dim_names.append( QString::fromUtf8(tmp_name) );
                    dim_sizes.append(dim_len);
                }
                
                QStringList att_names;
                QList<int> att_types;
                QList<QVariant> att_values;
                
                if (natts > 0)
                {
                    for (int j=0; j<natts; ++j)
                    {
                        //first read in the name of the attribute
                        call_netcdf_function( [&]()
                                { return nc_inq_attname(hndl, i, j, tmp_name); } );
                        
                        QString attname = QString::fromUtf8(tmp_name);

                        //now read in metadata about the attribute
                        nc_type xtype;
                        size_t len;
                        call_netcdf_function( [&]()
                            { return nc_inq_att(hndl, i, tmp_name, &xtype, &len); } );
                        
                        //now read in the value of the attribute
                        QByteArray memdata;
                        
                        if (xtype == NC_CHAR)
                        {
                            memdata.fill('\0', len+1);
                        }
                        else
                        {
                            memdata.resize( nc_type_to_size(xtype) * len );
                        }
                        
                        call_netcdf_function( [&]()
                            {return nc_get_att(hndl, i, tmp_name, memdata.data()); } );
                        
                        QVariant val = extract_value(memdata, xtype);
                        
                        att_names.append(attname);
                        att_types.append( int(xtype) );
                        att_values.append(val);
                    }
                }

                vars.insert( var_name, NetCDFDataInfo(i,var_name,var_type,
                                                      dim_names,dim_sizes,
                                                      att_names,att_types,att_values) );
                
                i += 1;
            }
        }
        catch(...)
        {
            delete[] tmp_name;
            delete[] dim_ids;
            throw;
        }

        delete[] tmp_name;
        delete[] dim_ids;
    }
    #endif
    
    return vars;
}

/** Return the names and sizes of all of the dimensions in the file */
QHash<QString,int> NetCDFFile::getDimensions() const
{
    QHash<QString,int> dims;
    
    #ifdef SIRE_USE_NETCDF
    if (hndl != -1)
    {
        int ndims;
        call_netcdf_function( [&](){ return nc_inq_ndims(hndl, &ndims); } );
        
        if (ndims <= 0)
            return dims;
        
        char *dim_name = new char[NC_MAX_NAME+1];
        
        try
        {
            for (int i=0; i<ndims; ++i)
            {
                size_t dim_len;
                call_netcdf_function( [&](){ return nc_inq_dim(hndl, i, dim_name, &dim_len); } );
                dims.insert( QString::fromUtf8(dim_name), dim_len );
            }
        }
        catch(...)
        {
            delete[] dim_name;
            throw;
        }
        
        delete[] dim_name;
    
    }
    #endif
    
    return dims;
}

/** Return the value of the string attribute 'name'.*/
QString NetCDFFile::getStringAttribute(const QString &name) const
{
    if (hndl != -1)
    {
    #ifdef SIRE_USE_NETCDF
    
        QByteArray c_name = name.toUtf8();
    
        //get the size of the attribute
        size_t vsize;
        
        call_netcdf_function( [&]()
            { return nc_inq_attlen(hndl, NC_GLOBAL, c_name.constData(), &vsize); } );
        
        //get the attribute
        char *c_value = new char[vsize+1];
        
        try
        {
            call_netcdf_function( [&]()
                { return nc_get_att_text(hndl, NC_GLOBAL, c_name.constData(), c_value); } );

            c_value[vsize] = '\0';
        
            QString value = QString::fromUtf8(c_value);

            delete[] c_value;
        
            return value;
        }
        catch(...)
        {
            delete[] c_value;
            throw;
        }
    #endif
    }
    
    throw SireError::invalid_key( QObject::tr(
            "There is not string attribute called '%1' in the NetCDF file '%2'")
                .arg(name).arg(fname), CODELOC );
    
    return QString();
}

/** Read in and return the NetCDFData associated with the passed NetCDFDataInfo */
NetCDFData NetCDFFile::read(const NetCDFDataInfo &variable) const
{
    NetCDFData data(variable);
    
    int data_size = data.dataSize();
    
    if (hndl != -1 and data_size > 0)
    {
    #ifdef SIRE_USE_NETCDF
        QByteArray memdata;
        memdata.fill('\0', data_size);
        call_netcdf_function( [&](){ return nc_get_var(hndl, variable.ID(), memdata.data()); } );
        data.setData(memdata);
    #endif
    }
    
    return data;
}
