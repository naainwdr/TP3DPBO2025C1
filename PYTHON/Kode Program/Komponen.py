class Komponen:
    def __init__(self, merk="", harga=0):
        self._merk = merk
        self._harga = harga

    def set_merk(self, merk):
        self._merk = merk

    def set_harga(self, harga):
        self._harga = harga

    def get_merk(self):
        return self._merk

    def get_harga(self):
        return self._harga
