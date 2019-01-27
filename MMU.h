#pragma once
class CPU;
class MMU
{
private:
	CPU& cpu;
public:
	MMU(CPU& incpu);
	~MMU();
	int test();
};

