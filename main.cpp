#include <fstream>
#include <iostream>
#include"Put.h"
#include"Avion.h"
#include"Autobus.h"
#include"Putovanje.h"
using namespace std;

void main()
{
	Putovanje p(4);
	Put* p1 = new Avion("nis", 5, 1, 700,"tvoja keva", 50, 1500);
	Put* p2 = new Avion("sofia", 10, 3, 1000, "tvoja mama", 40, 1000);
	Put* p3 = new Autobus("pozarevac", 6, 3, 1200, 150, 199, 9, 1);
	Put* p4 = new Autobus("jasenovac", 12, 10, 100, 700, 149, 1, 7);
	p.dodaj(p1);
	p.dodaj(p2);
	p.dodaj(p3);
	p.dodaj(p4);

	p.brisi("nis");
	p.cenaZaAgenciju(0);
	p.cenaZaPutnika(1);
	p.ukupanBrNocenja(2);
	p.upisFajl("Putovanje.txt");
}