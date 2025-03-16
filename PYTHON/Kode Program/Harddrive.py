from Komponen import Komponen

class Harddrive(Komponen):
    def __init__(self, kapasitas=0, tipe="", merk="", harga=0):
        super().__init__(merk, harga)
        self._kapasitas = kapasitas
        self._tipe = tipe

    def set_kapasitas(self, kapasitas):
        self._kapasitas = kapasitas

    def get_kapasitas(self):
        return self._kapasitas

    def set_tipe(self, tipe):
        self._tipe = tipe

    def get_tipe(self):
        return self._tipe
