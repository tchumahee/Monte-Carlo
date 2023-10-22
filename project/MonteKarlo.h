#pragma once
#include "Tacka.h"

class MonteKarlo
{
private:
	int brTacakaUnutarKruga;
	int brTacakaUnutarKvadrata;

	void tackaUnutarKruga(Tacka);

public:
	MonteKarlo();
	double pi();
	void generisiTacke(int);
	inline void obrisiTacke() { brTacakaUnutarKruga = brTacakaUnutarKvadrata = 0; };
	inline int getBrTacakaUnutarKruga() { return brTacakaUnutarKruga; };
	inline int getBrTacakaUnutarKvadrata() { return brTacakaUnutarKvadrata; };
};

