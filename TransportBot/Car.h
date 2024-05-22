#pragma once
#include "Transport.h"

class Car : public Transport
{
public:
	Car () {}
	Car(int tank) : Transport(tank) {}
};