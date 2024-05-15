#pragma once
class Integer
{
private:
	int value;
public:
	Integer() :value(0) {}
	Integer(int value) :value(value) {}

	Integer sum(Integer integer);
	Integer sub(Integer integer);
	Integer mul(Integer integer);
	Integer div(Integer integer);
	Integer mod(Integer integer);
	Integer pow(int n);
	Integer opp();

	Integer operator+(Integer integer) {
		int v = value + integer.value;
		return Integer(v);
	};

	Integer operator+(Integer number) {
		int v = value + number;
		return Integer(v);
	};

	int getValue() {
		return value;
	}

	void setValue(int value) {
		this->value = value;
	}
};