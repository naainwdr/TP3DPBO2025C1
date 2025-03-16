from Komputer import Komputer

class Laptop(Komputer):
    def __init__(self, pemilik="", cpu=None, gpu=None, ram_list=None, harddrive_list=None, 
                 os="", jenis="", kapasitas_baterai=0, berat=0.0, jumlah_baterai=0):
        super().__init__(pemilik, cpu, gpu, ram_list, harddrive_list)
        self._os = os
        self._jenis = jenis
        self._kapasitas_baterai = kapasitas_baterai
        self._berat = berat
        self._jumlah_baterai = jumlah_baterai

    def set_kapasitas_baterai(self, kapasitas_baterai):
        self._kapasitas_baterai = kapasitas_baterai

    def get_kapasitas_baterai(self):
        return self._kapasitas_baterai

    def set_berat(self, berat):
        self._berat = berat

    def get_berat(self):
        return self._berat

    def set_jumlah_baterai(self, jumlah_baterai):
        self._jumlah_baterai = jumlah_baterai

    def get_jumlah_baterai(self):
        return self._jumlah_baterai
