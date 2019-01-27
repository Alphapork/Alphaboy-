#pragma once
#include "MMU.h"
#include "CPU.h"

class Gameboy
{
private:
	CPU cpu;
	MMU mmu;

public:
	Gameboy();
	~Gameboy();
	void test();
};
