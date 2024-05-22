#include <iostream>
#include "GasStation.h"
#include "Car.h"
#include "Bus.h"
#include "Truck.h"
#include "Motorbike.h"

using namespace std;

int main() {
	Car car1{ 45 }, car2{ 55 }, car3{ 50 };
	Bus bus1{ 350 };
	Truck truck1{ 270 }, truck2{ 230 };
	Motorbike bike1{ 2 }, bike2{ 3 }, bike3{ 5 };

	Transport transports[]{ car1, car2, car3, bus1, truck1, truck2,
		bike1, bike2, bike3 };

	GasStation station;

	int total = station.calcTotalGas(transports, 6);

	cout << "Total Fuel is " << total << endl;
}