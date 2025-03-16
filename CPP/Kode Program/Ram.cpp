#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class Ram : public Komponen {
	private:
		int kapasitas;  // GB
		int kecepatan;  // MHz
		string tipe; 
	public:
		Ram(){
		}

		Ram(int kapasitas, int kecepatan, string tipe, string merk, int harga)
		: Komponen(merk, harga) {
			this->kapasitas = kapasitas;
			this->kecepatan = kecepatan;
		}

		void setKapasitas(int kapasitas) {
			this->kapasitas = kapasitas;
		}
		
		int getKapasitas() {
			return this->kapasitas; 
		}

		void setKecepatan(int kecepatan) {
			this->kecepatan = kecepatan;
		}
		
		int getKecepatan() {
			return this->kecepatan;
		}
		
		void setTipe(string tipe){
			this->tipe = tipe;
		}

		string getTipe(){
			return this->tipe;
		}
		
		~Ram(){
		}
};

