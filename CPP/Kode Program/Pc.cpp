#pragma once
#include <iostream>
#include <string>
#include "Komputer.cpp"

class Pc : public Komputer {
	private:
		int dayaPSU; // watt
		string jenisPendingin;
		int jumlahSlotExpan;

	public:
		Pc() {
		}

		Pc(string pemilik, Cpu cpu, Gpu gpu, vector<Ram> ramList, vector<Harddrive> harddriveList, string os, string jenis, int dayaPSU, string jenisPendingin, int jumlahSlotExpan) 
			: Komputer(pemilik, cpu, gpu, ramList, harddriveList) {
			setOs(os);
			setJenis(jenis);
			this->dayaPSU = dayaPSU;
			this->jenisPendingin = jenisPendingin;
			this->jumlahSlotExpan = jumlahSlotExpan;
		}

		void setDayaPSU(int dayaPSU) {
			this->dayaPSU = dayaPSU;
		}

		void setJenisPendingin(string jenisPendingin) {
			this->jenisPendingin = jenisPendingin;
		}

		void setJumlahSlotExpan(int jumlahSlotExpan) {
			this->jumlahSlotExpan = jumlahSlotExpan;
		}

		int getDayaPSU() {
			return this->dayaPSU;
		}

		string getJenisPendingin() {
			return this->jenisPendingin;
		}

		int getJumlahSlotExpan() {
			return this->jumlahSlotExpan;
		}

		~Pc() {
		}
};
