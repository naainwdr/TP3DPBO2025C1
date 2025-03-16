from Komputer import Komputer

class Pc(Komputer):
    def __init__(self, pemilik="", cpu=None, gpu=None, ram_list=None, harddrive_list=None, 
                 os="", jenis="", daya_psu=0, jenis_pendingin="", jumlah_slot_expan=0):
        super().__init__(pemilik, cpu, gpu, ram_list, harddrive_list)
        self._os = os
        self._jenis = jenis
        self._daya_psu = daya_psu
        self._jenis_pendingin = jenis_pendingin
        self._jumlah_slot_expan = jumlah_slot_expan

    def set_daya_psu(self, daya_psu):
        self._daya_psu = daya_psu

    def get_daya_psu(self):
        return self._daya_psu

    def set_jenis_pendingin(self, jenis_pendingin):
        self._jenis_pendingin = jenis_pendingin

    def get_jenis_pendingin(self):
        return self._jenis_pendingin

    def set_jumlah_slot_expan(self, jumlah_slot_expan):
        self._jumlah_slot_expan = jumlah_slot_expan

    def get_jumlah_slot_expan(self):
        return self._jumlah_slot_expan
