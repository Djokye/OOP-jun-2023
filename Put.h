#pragma once
#include<iostream>
#include<fstream>
using namespace std;
class Put
{
protected:
	string imeGrada;
	int brPutnika, brNocenja, cenaPoNocenju;
public:
	Put() { brPutnika = 0; brNocenja = 0; cenaPoNocenju = 0; }
	Put(string ig, int brp, int brn, int cpn)
	{
		imeGrada = ig;
		brPutnika = brp;
		brNocenja = brn;
		cenaPoNocenju = cpn;
	}
	virtual ~Put() {}
	string getImeGrada()
	{
		return imeGrada;
	}
	virtual float cenaAgencija() = 0;
	virtual float cenaPutnik() = 0;
	virtual int ukBrNocenja() = 0;
	virtual void upisi(ofstream& o) = 0;
};

