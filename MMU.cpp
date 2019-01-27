#include "MMU.h"



MMU::MMU(CPU& incpu): cpu(incpu)
{
}


MMU::~MMU()
{
}

int MMU::test() {
	return 13;
}
