#pragma once
#include "Beehive.h"

class QueenBee : public Beehive
{
private:
	int egg;
	int age;
public: 
	QueenBee() : Beehive(), egg(10), age(20) {}
	QueenBee(int egg, int age, int HoneyConsuption, int LifeLength, string size)
		: Beehive(HoneyConsumption, LifeLength, size), egg(egg), age(age) {}
};