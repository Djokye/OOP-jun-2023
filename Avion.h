#pragma once
#include<iostream>
#include"Put.h"
using namespace std;
class Avion : public Put
{
	string imeKompanije;
	int duzinaTrajanjaLeta, cenaMestaPoPutniku;
public:
	Avion() : Put()
	{
		duzinaTrajanjaLeta = 0;
		cenaMestaPoPutniku = 0;
	}
	Avion(int brp, int brn, int cpn, int dtl, int cmpp) : Put(brp,  brn,  cpn)
	{
		duzinaTrajanjaLeta = dtl;
		cenaMestaPoPutniku = cmpp;
	}
};

