#pragma once
#include <string>
using namespace std;

class Beehive
{
private:
	int x;
	int y;
	int z;
	int frame;
	string ConstructionType;
	string material;

	Beehive() : x(1) {}
	Beehive(int x) : x(x) {}
	Beehive() : y(1) {}
	Beehive(int y) : y(y) {}
	Beehive() : z(1) {}
	Beehive(int z) : z(z) {}

	Beehive() : frame(5) {}
	Beehive(int frame) : frame(frame) {}

	Beehive() : ConstructionType("houselike") {}
	Beehive(string ConstructionType) : ConstructionType(ConstructionType) {}

	Beehive() : material("wood") {}
	Beehive(string material) : material(material) {}
	
	int getX();
	int getY();
	int getZ();
	void setX(int x);
	void setY(int y);
	void setZ(int z);

	int getFrame();
	void setFrame(int frame);

protected:                                                                         
	int HoneyConsumption;
	int LifeLength;
	string size;

public:
	Beehive() : HoneyConsumption(0) {}
	Beehive(int HoneyConsumption) : HoneyConsumption(HoneyConsumption) {}

	Beehive() : LifeLength(35) {}
	Beehive(int LifeLength) : LifeLength(LifeLength) {}

	Beehive() : size("medium") {}
	Beehive(string size) : size(size) {}
};