#pragma once
#include <iostream>
#include <string>
#include "Processor.cpp"

using namespace std;

class Gpu : public Processor {
private:
    int vramSize; // dalam GB
    string architecture; // CUDA, Tensor Cores, OpenCL, dll

public:
    Gpu() {
	}

    Gpu(int vramSize, string architecture, int coreCount, float clockSpeed, string merk, int harga)
        : Processor(coreCount, clockSpeed, merk, harga) {
        this->vramSize = vramSize;
        this->architecture = architecture;
    }

    // Getter untuk vramSize
    int getVramSize() {
        return this->vramSize;
    }

    // Setter untuk vramSize
    void setVramSize(int vramSize) {
        this->vramSize = vramSize;
    }

    // Getter untuk architecture
    string getArchitecture() {
        return this->architecture;
    }

    // Setter untuk architecture
    void setArchitecture(string architecture) {
        this->architecture = architecture;
    }

    ~Gpu() {
	}
};