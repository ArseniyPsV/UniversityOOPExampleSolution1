#pragma once
class Transport
{
private:
	int tank;
public:
	Transport() {}
	Transport(int tank) : tank(tank) {}

	int getTank();
	void setTank(int tank);
};

