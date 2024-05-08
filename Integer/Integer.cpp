#include "Integer.h"

Integer Integer::add(Integer a) {
	return Integer{ value + a.getValue() };
};

Integer Integer::sub(Integer a) {
	return Integer{ value - a.getValue() };
	
};

Integer Integer::mul(Integer a) {
	return Integer{ value * a.getValue() };
};

Integer Integer::div(Integer a) {
	return Integer{ value / a.getValue() };
};

Integer Integer::mod(Integer a) {
	return Integer{ value % a.getValue() };
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