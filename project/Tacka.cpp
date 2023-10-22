#include "Tacka.h"

Tacka::Tacka(double x, double y) : x(x), y(y) {};

Tacka Tacka::generisiTacku() {
	double x = (double)rand() / RAND_MAX;
	double y = (double)rand() / RAND_MAX;

	Tacka tacka = Tacka(x, y);
	return tacka;
}