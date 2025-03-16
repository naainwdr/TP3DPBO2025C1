#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class Harddrive : public Komponen{
	private:
		int kapasitas;
		string tipe;
	public:
		Harddrive(){
		}

		Harddrive(int kapasitas, string tipe, string merk, int harga) 
		: Komponen(merk, harga){
			this->kapasitas = kapasitas;
			this->tipe = tipe;
		}

		void setkapasitas(int kapasitas){
			this->kapasitas = kapasitas;
		}

		void setTipe(string tipe){
			this->tipe = tipe;
		}

		int getKapasitas(){
			return this->kapasitas;
		}

		string getTipe(){
			return this->tipe;
		}

		~Harddrive(){
		}
};


