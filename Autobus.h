#pragma once
#include<iostream>
#include"Put.h"
using namespace std;
class Autobus : public Put
{
	int kilometraza, cenaGorivoLitar, gorivoNa100KM, brNociBus;
public:
	Autobus() : Put()
	{
		kilometraza = 0;
		cenaGorivoLitar = 0;
		gorivoNa100KM = 0;
		brNociBus = 0;
	}
	Autobus(int brp, int brn, int cpn, int k, int cgl, int gn100km, int brnb) : Put(brp, brn, cpn)
	{
		kilometraza = k;
		cenaGorivoLitar = cgl;
		gorivoNa100KM = gn100km;
		brNociBus = brnb;
	}
};

