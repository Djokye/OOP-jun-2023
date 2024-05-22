#pragma once
#include<iostream>
using namespace std;
class Put
{
	string imeGrada;
	int brPutnika, brNocenja, cenaPoNocenju;
public:
	Put() { brPutnika = 0; brNocenja = 0; cenaPoNocenju = 0; }
	Put(int brp, int brn, int cpn)
	{
		brPutnika = brp;
		brNocenja = brn;
		cenaPoNocenju = cpn;
	}
};

