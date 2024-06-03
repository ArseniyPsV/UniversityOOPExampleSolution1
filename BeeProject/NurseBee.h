#pragma once
#include "Beehive.h"

class NurseBee : public Beehive
{
private:
	int milk;
public: 
	NurseBee() : Beehive(), milk(10) {}
	NurseBee(int milk, int LifeLength, int HoneyConsumption, int age) 
	: Beehive(HoneyConsumption, LifeLength, age) {}
};

