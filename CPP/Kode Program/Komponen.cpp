#pragma once
#include <iostream>
#include <string>

using namespace std;

class Komponen {
	private:
		string merk;
		int harga;
	public:
		Komponen(){
		}

		Komponen(string merk, int harga){
			this->merk = merk;
			this->harga = harga;
		}


		void setMerk(string merk){
			this->merk = merk;
		}

		void setharga(int harga){
			this->harga = harga;
		}

		string getMerk(){
			return this->merk;
		}
		
		int getharga(){
			return this->harga;
		}

		~Komponen(){
		}
};

