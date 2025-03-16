from Processor import Processor

class Cpu(Processor):
    def __init__(self, cache_size=0, hyper_threading=False, core_count=0, clock_speed=0.0, merk="", harga=0):
        super().__init__(core_count, clock_speed, merk, harga)
        self._cache_size = cache_size
        self._hyper_threading = hyper_threading

    def set_cache_size(self, cache_size):
        self._cache_size = cache_size

    def get_cache_size(self):
        return self._cache_size

    def set_hyper_threading(self, hyper_threading):
        self._hyper_threading = hyper_threading

    def get_hyper_threading(self):
        return self._hyper_threading