#pragma once
#include <iostream>
#include <string>
#include "Processor.cpp"

using namespace std;

class Cpu : public Processor {
	private:
		int cacheSize; // dalam MB
		bool hyperThreading;

	public:
		Cpu() {
		}

		Cpu(int cacheSize, bool hyperThreading, int coreCount, float clockSpeed, string merk, int harga)
			: Processor(coreCount, clockSpeed, merk, harga) {
			this->cacheSize = cacheSize;
			this->hyperThreading = hyperThreading;
		}

		// Getter untuk cacheSize
		int getCacheSize() {
			return this->cacheSize;
		}

		// Setter untuk cacheSize
		void setCacheSize(int cacheSize) {
			this->cacheSize = cacheSize;
		}

		// Getter untuk hyperThreading
		bool getHyperThreading() {
			return this->hyperThreading;
		}

		// Setter untuk hyperThreading
		void setHyperThreading(bool hyperThreading) {
			this->hyperThreading = hyperThreading;
		}

		~Cpu() {
		}
};