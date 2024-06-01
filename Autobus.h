#pragma once
#include<iostream>
#include"Put.h"
#include<fstream>
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
	Autobus(string ig, int brp, int brn, int cpn, int k, int cgl, int gn100km, int brnb) : Put(ig, brp, brn, cpn)
	{
		kilometraza = k;
		cenaGorivoLitar = cgl;
		gorivoNa100KM = gn100km;
		brNociBus = brnb;
	}
	float cenaAgencija() override
	{
		return kilometraza * gorivoNa100KM / 100 * cenaGorivoLitar * 1.25 + (brPutnika * cenaPoNocenju);
	}
	float cenaPutnik() override
	{
		return (kilometraza * gorivoNa100KM / 100 * cenaGorivoLitar * 1.25 + (brPutnika * cenaPoNocenju)) / brPutnika * 1.35;
	}
	int ukBrNocenja() override
	{
		return brNocenja + brNociBus;
	}
	void upisi(ofstream& o) override {
		o << "ime grada: " << imeGrada << " br putnika: " << brPutnika << " br nocenja: " << brNocenja
			<< " kilometraza: " << kilometraza << " broj noci u busu: " << brNociBus << endl;
	}
};

