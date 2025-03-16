#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class Processor : public Komponen {
	private:
		int coreCount;
		float clockSpeed; // Hz
	public:
		Processor() {
		}
		
		Processor(int coreCount, float clockSpeed, string merk, int harga)
		: Komponen(merk, harga) {
			this->coreCount = coreCount;
			this->clockSpeed = clockSpeed;
		}

		void setCoreCount(int coreCount) {
			this->coreCount = coreCount;
		}
		
		int getCoreCount() {
			return coreCount; 
		}

		void setClockSpeed(float clockSpeed) {
			this->clockSpeed = clockSpeed;
		}
		
		float getClockSpeed() {
			return clockSpeed;
		}
		
		~Processor() {
		}
};