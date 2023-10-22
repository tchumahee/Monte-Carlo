#pragma once
#include <iostream>
#include <time.h>

class Tacka {
public:
	double x;
	double y;

	Tacka() = default;

	Tacka(double x, double y);

	static Tacka generisiTacku();
};
