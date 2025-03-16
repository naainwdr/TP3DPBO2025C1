#pragma once
#include <iostream>
#include <string>
#include "Komputer.cpp"

class Laptop : public Komputer {
	private:
		int kapasitasBaterai; // mAh
		float berat; // kg
		int jumlahBaterai;

	public:
		Laptop() {
		}

		Laptop(string pemilik, Cpu cpu, Gpu gpu, vector<Ram> ramList, vector<Harddrive> harddriveList, string os, string jenis, int kapasitasBaterai, float berat, int jumlahBaterai) 
			: Komputer(pemilik, cpu, gpu, ramList, harddriveList) {
			setOs(os);
			setJenis(jenis);
			this->kapasitasBaterai = kapasitasBaterai;
			this->berat = berat;
			this->jumlahBaterai = jumlahBaterai;
		}

		void setKapasitasBaterai(int kapasitasBaterai) {
			this->kapasitasBaterai = kapasitasBaterai;
		}

		void setBerat(float berat) {
			this->berat = berat;
		}

		void setJumlahBaterai(int jumlahBaterai) {
			this->jumlahBaterai = jumlahBaterai;
		}

		int getKapasitasBaterai() {
			return this->kapasitasBaterai;
		}

		float getBerat() {
			return this->berat;
		}

		int getJumlahBaterai() {
			return this->jumlahBaterai;
		}

		~Laptop() {
		}
};
