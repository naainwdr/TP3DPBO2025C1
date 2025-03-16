from Komponen import Komponen

class Processor(Komponen):
    def __init__(self, core_count=0, clock_speed=0.0, merk="", harga=0):
        super().__init__(merk, harga)
        self._core_count = core_count
        self._clock_speed = clock_speed

    def set_core_count(self, core_count):
        self._core_count = core_count

    def get_core_count(self):
        return self._core_count

    def set_clock_speed(self, clock_speed):
        self._clock_speed = clock_speed

    def get_clock_speed(self):
        return self._clock_speed
