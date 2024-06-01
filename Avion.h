#pragma once
#include<iostream>
#include"Put.h"
#include<fstream>
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
	Avion(string ig, int brp, int brn, int cpn, string ik, int dtl, int cmpp) : Put(ig, brp,  brn,  cpn)
	{
		imeKompanije = ik;
		duzinaTrajanjaLeta = dtl;
		cenaMestaPoPutniku = cmpp;
	}
	float cenaAgencija() override
	{
		return brPutnika * (cenaMestaPoPutniku + cenaPoNocenju);
	}
	float cenaPutnik() override
	{
		return cenaMestaPoPutniku * 1.3 + cenaPoNocenju * 1.25;
	}
	int ukBrNocenja() override
	{
		return brNocenja;
	}
	void upisi(ofstream& o) override {
		o << "ime grada: " << imeGrada << " br putnika: " << brPutnika << " br nocenja: " << brNocenja
			<< " ime kompanije: " << imeKompanije << " duzina trajanja leta: " << duzinaTrajanjaLeta << endl;
	}
};

