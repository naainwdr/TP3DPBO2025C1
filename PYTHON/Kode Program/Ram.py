from Komponen import Komponen

class Ram(Komponen):
    def __init__(self, kapasitas=0, kecepatan=0, tipe="", merk="", harga=0):
        super().__init__(merk, harga)
        self._kapasitas = kapasitas
        self._kecepatan = kecepatan
        self._tipe = tipe

    def set_kapasitas(self, kapasitas):
        self._kapasitas = kapasitas

    def get_kapasitas(self):
        return self._kapasitas

    def set_kecepatan(self, kecepatan):
        self._kecepatan = kecepatan

    def get_kecepatan(self):
        return self._kecepatan

    def set_tipe(self, tipe):
        self._tipe = tipe

    def get_tipe(self):
        return self._tipe
