#pragma once
#include "Integer.h"

Integer operator+(Integer integer1, Integer integer2) {
	return Integer(integer1.getValue() + integer2.getValue());
}

Integer operator*(Integer integer1, Integer integer2) {
	return Integer(integer1.getValue() * integer2.getValue());
}

Integer operator/(Integer integer1, Integer integer2) {
	return Integer(integer1.getValue() / integer2.getValue());
}

Integer operator-(Integer integer1, Integer integer2) {
	return Integer(integer1.getValue() - integer2.getValue());
}