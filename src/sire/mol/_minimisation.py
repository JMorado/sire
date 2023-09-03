__all__ = ["Minimisation"]

from ._dynamics import DynamicsData as _DynamicsData
from ._dynamics import _add_extra


class MinimisationData(_DynamicsData):
    """
    Internal class that is designed to only be used by the Minimisation
    class. This holds the shared state for minimisation on a set
    of molecule(s).
    """

    def __init__(self, mols=None, map=None):
        super().__init__(mols=mols, map=map)

    def run(self, max_iterations: int):
        """
        Internal method that runs minimisation on the molecules.

        This method is designed to be called from the Minimisation
        class.

        Parameters:

        - max_iterations (int): The maximum number of iterations to run
        """
        from openmm import LocalEnergyMinimizer
        from concurrent.futures import ThreadPoolExecutor

        if max_iterations <= 0:
            max_iterations = 0

        from ..base import ProgressBar

        def runfunc(max_its):
            try:
                LocalEnergyMinimizer.minimize(
                    self._omm_mols, maxIterations=max_its
                )

                return 0
            except Exception as e:
                return e

        with ProgressBar(text="minimisation") as spinner:
            spinner.set_speed_unit("checks / s")

            with ThreadPoolExecutor() as pool:
                run_promise = pool.submit(runfunc, max_iterations)

                while not run_promise.done():
                    try:
                        result = run_promise.result(timeout=0.2)
                    except Exception:
                        spinner.tick()
                        pass

                if result != 0:
                    raise result


class Minimisation:
    """
    Class that runs minimisation on the contained molecule(s). Note that
    this class is not designed to be constructed directly. You should only
    use this class by calling `.minimisation()` on the molecules(s)
    you want to minimise
    """

    def __init__(
        self,
        mols=None,
        map=None,
        cutoff=None,
        cutoff_type=None,
        schedule=None,
        lambda_value=None,
        swap_end_states=None,
        shift_delta=None,
        coulomb_power=None,
        restraints=None,
        fixed=None,
    ):
        from ..base import create_map

        extras = {}

        _add_extra(extras, "cutoff", cutoff)
        _add_extra(extras, "cutoff_type", cutoff_type)
        _add_extra(extras, "schedule", schedule)
        _add_extra(extras, "lambda", lambda_value)
        _add_extra(extras, "swap_end_states", swap_end_states)
        _add_extra(extras, "shift_delta", shift_delta)
        _add_extra(extras, "coulomb_power", coulomb_power)
        _add_extra(extras, "restraints", restraints)
        _add_extra(extras, "fixed", fixed)

        map = create_map(map, extras)

        self._d = MinimisationData(mols=mols, map=map)

    def __str__(self):
        return "Minimisation()"

    def __repr__(self):
        return self.__str__()

    def run(self, max_iterations: int = 10000):
        """
        Perform minimisation on the molecules, running a maximum
        of max_iterations iterations.

        Parameters:

        - max_iterations (int): The maximum number of iterations to run
        """
        if not self._d.is_null():
            self._d.run(max_iterations=max_iterations)

        return self

    def commit(self):
        """
        Commit the minimisation to the molecules, returning the
        minimised molecules.
        """
        if not self._d.is_null():
            self._d.commit()

        return self._d._sire_mols

    def __call__(self, max_iterations: int = 10000):
        """
        Perform minimisation on the molecules, running a maximum
        of max_iterations iterations.

        Parameters:

        - max_iterations (int): The maximum number of iterations to run
        """
        return self.run(max_iterations=max_iterations).commit()
