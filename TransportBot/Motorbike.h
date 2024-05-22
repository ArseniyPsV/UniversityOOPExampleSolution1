#pragma once
#include "Transport.h"

class Motorbike : public Transport
{
public:
	Motorbike() {}
	Motorbike(int tank) : Transport(tank) {}
};