from Processor import Processor

class Gpu(Processor):
    def __init__(self, vram_size=0, architecture="", core_count=0, clock_speed=0.0, merk="", harga=0):
        super().__init__(core_count, clock_speed, merk, harga)
        self._vram_size = vram_size
        self._architecture = architecture

    def set_vram_size(self, vram_size):
        self._vram_size = vram_size

    def get_vram_size(self):
        return self._vram_size

    def set_architecture(self, architecture):
        self._architecture = architecture

    def get_architecture(self):
        return self._architecture