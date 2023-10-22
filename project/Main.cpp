#include <iostream>
#include <iomanip>
#include "Tacka.h"
#include "MonteKarlo.h"


using namespace std;

static const int BROJ_UZORAKA = 1000;
static const int BROJ_UZORAKA_KORAK = 100;
static const double PI = 3.14159265358979323846;

int main()
{
	char meni1;
	int brojUzoraka;
	int brojDecimala = 0;
	bool whileIzlaz = false;

	srand(time(NULL));

	do {
		cout << "	Podrazumijevani broj generisanih tacaka je 1000. \n	1) Promjena broja uzoraka\n	2) Odabir broja tacnih decimala\n	";
		cin >> meni1;
		switch (meni1) {
		case '1':
			cout << "\n\n	Unesite broj tacaka za generisanje. \n	";
			cin >> brojUzoraka;
			whileIzlaz = true;
			break;
		case '2':
			brojUzoraka = BROJ_UZORAKA;
			cout << "\n\n	Unesite broj decimala koje treba da se poklope sa pravom vrijednoscu.\n	";
			cin >> brojDecimala;
			whileIzlaz = true;
		}
	} while (!whileIzlaz);
	
	MonteKarlo monteKarlo;

	monteKarlo.generisiTacke(brojUzoraka);
	if (brojDecimala)
	{
		while ((long long)(monteKarlo.pi() * pow(10, brojDecimala)) != (long long)(PI * pow(10, brojDecimala))) {
			monteKarlo.generisiTacke(BROJ_UZORAKA_KORAK);
			brojUzoraka += BROJ_UZORAKA_KORAK;
		}
	}

	cout << setprecision(20);
	cout << "\n	Pi = " << monteKarlo.pi() <<"\n	Broj uzoraka: " << brojUzoraka << "\n\n";

	system("pause");
}
