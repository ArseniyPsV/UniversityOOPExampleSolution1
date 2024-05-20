#pragma once
class Integer
{
private:
	int value;
public:
	Integer() : value(0) {}
	Integer(int value) : value(value) {}

	int getValue() {
		return value;
	}

	void setValue(int value) {
		this->value = value;
	}

	Integer sum(Integer integer) {
		int v = value + integer.value;
		return Integer(v);
	}


	//Integer operator+(Integer integer) {
	//	return Integer(value + integer.getValue());
	//}

	//Integer operator-() {
	//	return Integer(-value);
	//}

	/*Integer sum(int number) {
		int v = value + number;
		return Integer(v);
	}*/

};