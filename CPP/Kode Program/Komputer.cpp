#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Cpu.cpp"
#include "Gpu.cpp"
#include "Ram.cpp"
#include "Harddrive.cpp"

class Komputer {
	private:
		string pemilik;
		string os;
		string jenis;
		Cpu cpu;
		Gpu gpu;
		vector<Ram> ramList;
		vector<Harddrive> harddriveList;

	public:
		Komputer() {}

		Komputer(string pemilik, Cpu cpu, Gpu gpu, vector<Ram> ramList, vector<Harddrive> harddriveList) {
			this->pemilik = pemilik;
			this->cpu = cpu;
			this->gpu = gpu;
			this->ramList = ramList;
			this->harddriveList = harddriveList;
		}

		void setPemilik(string pemilik) {
			this->pemilik = pemilik;
		}
		
		void setOs(string os) {
			this->os = os;
		}
		
		void setJenis(string jenis) {
			this->jenis = jenis;
		}

		void setCpu(Cpu cpu) {
			this->cpu = cpu;
		}

		void setGpu(Gpu gpu) {
			this->gpu = gpu;
		}

		void setRam(vector<Ram> ramList) {
			this->ramList = ramList;
		}

		void setHarddrive(vector<Harddrive> harddriveList) {
			this->harddriveList = harddriveList;
		}

		string getPemilik() {
			return this->pemilik;
		}
		
		string getOs() {
			return this->os;
		}
		
		string getJenis() {
			return this->jenis;
		}

		Cpu getCpu() {
			return this->cpu;
		}

		Gpu getGpu() {
			return this->gpu;
		}

		vector<Ram> getRamList() {
			return this->ramList;
		}

		vector<Harddrive> getHarddriveList() {
			return this->harddriveList;
		}

		void addRam(Ram ram) {
			this->ramList.push_back(ram);
		}

		void addHarddrive(Harddrive harddrive) {
			this->harddriveList.push_back(harddrive);
		}

		~Komputer() {
			
		}
};
