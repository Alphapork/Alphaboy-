#include "CPU.h"

CPU::CPU(MMU& inmmu):mmu(inmmu)
{
	h = 0xFF;
	l = 0xFF;
}


CPU::~CPU()
{
}

u16 CPU::test() {
	return getDoubleRegister(h, l);
}

u16 CPU::getDoubleRegister(u8 high, u8 low) {
	return (u16)((high << 8) | low);
}

u8 CPU::readAddress(u16 adr) {
	return tempmem[adr]; //TODO
}

void CPU::ld8bit(u8& target, u8 source) {
	target = source;
}