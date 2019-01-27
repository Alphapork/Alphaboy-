#include "Gameboy.h"
#include <iostream>
#include <stdio.h>
int main() {
	Gameboy* gb = new Gameboy();
	gb->test();
	getchar();
}

Gameboy::Gameboy():cpu(mmu), mmu(cpu)
{
}




Gameboy::~Gameboy()
{
}

void Gameboy::test() {
	printf("%#06x\n", cpu.test());
	std::cout << std::hex << cpu.test();
}