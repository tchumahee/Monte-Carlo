#include "MonteKarlo.h"

MonteKarlo::MonteKarlo() {
	brTacakaUnutarKruga = 0;
	brTacakaUnutarKvadrata = 0;
}

void MonteKarlo::tackaUnutarKruga(Tacka tacka) {
	if ((tacka.x * tacka.x + tacka.y * tacka.y) <= 1)
		brTacakaUnutarKruga++;
	brTacakaUnutarKvadrata++;
}

double MonteKarlo::pi() {
	return 4 * (double)brTacakaUnutarKruga / brTacakaUnutarKvadrata;
}

void MonteKarlo::generisiTacke(int brojTacaka) {
	Tacka tacka;
	for (int i = 0; i < brojTacaka; i++)
	{
		tacka = Tacka::generisiTacku();
		tackaUnutarKruga(tacka);
	}
}