from Ram import Ram
from Harddrive import Harddrive
from Cpu import Cpu
from Gpu import Gpu

class Komputer:
    def __init__(self, pemilik="", cpu=None, gpu=None, ram_list=None, harddrive_list=None):
        self._pemilik = pemilik
        self._os = ""
        self._jenis = ""
        self._cpu = cpu
        self._gpu = gpu
        self._ram_list = ram_list
        self._harddrive_list = harddrive_list
    
    def set_pemilik(self, pemilik):
        self._pemilik = pemilik

    def get_pemilik(self):
        return self._pemilik

    def set_os(self, os):
        self._os = os

    def get_os(self):
        return self._os

    def set_jenis(self, jenis):
        self._jenis = jenis

    def get_jenis(self):
        return self._jenis

    def set_cpu(self, cpu):
        self._cpu = cpu

    def get_cpu(self):
        return self._cpu

    def set_gpu(self, gpu):
        self._gpu = gpu

    def get_gpu(self):
        return self._gpu

    def set_ram_list(self, ram_list):
        self._ram_list = ram_list

    def get_ram_list(self):
        return self._ram_list

    def add_ram(self, ram):
        self._ram_list.append(ram)

    def set_harddrive_list(self, harddrive_list):
        self._harddrive_list = harddrive_list

    def get_harddrive_list(self):
        return self._harddrive_list

    def add_harddrive(self, harddrive):
        self._harddrive_list.append(harddrive)