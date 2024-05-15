#include "Integer.h"

Integer Integer::sum(Integer integer) {
	int v = value + integer.value;
	return Integer(v);
};

Integer Integer::sub(Integer integer) {
	return Integer{ value - integer.getValue() };

};

Integer Integer::mul(Integer integer) {
	return Integer{ value * integer.getValue() };
};

Integer Integer::div(Integer integer) {
	return Integer{ value / integer.getValue() };
};

Integer Integer::mod(Integer integer) {
	return Integer{ value % integer.getValue() };
};

Integer Integer::pow(int n) {
	int number = 1;
	for (int i = 0; i < n; i++)
	{
		number *= value;
	}
	return Integer(number);
};

Integer Integer::opp() {
	return Integer(-value);
};

Integer operator+(Integer integer1, Integer integer2) {
	return Integer(integer1.getValue() + integer2.getValue());
};