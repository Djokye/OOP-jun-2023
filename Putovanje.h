#pragma once
#include<iostream>
#include"Put.h"
#include"Avion.h"
#include"Autobus.h"
#include <fstream>
using namespace std;
class Putovanje
{
	Put** putovi;
	int brmax, tren;

public:
	Putovanje()
	{
		brmax = 0;
		tren = 0;
		putovi = new Put * [1];
	}
	Putovanje(int brmax)
	{
		this->brmax = brmax;
		putovi = new Put * [brmax];
		tren = 0;
	}
	~Putovanje()
	{
		if (putovi != nullptr)
		{
			for (int i = 0; i < tren; i++)
			{
				delete putovi[i];
			}
			delete[] putovi;
			putovi = nullptr;
		}
	}
	void dodaj(Put* p)
	{
		if (tren<brmax)
		{
			putovi[tren] = p;
			tren++;
		}
	}
	void brisi(string grad)
	{
		for (int i = 0; i < tren; i++)
		{
			if (putovi[i]->getImeGrada() == grad)
			{
				for (int j = i; j <= tren; j++)
				{
					putovi[i] = putovi[i+1];
				}
				tren--;
				i = tren;
			}
		}
	}
	void cenaZaAgenciju(int i)
	{
		cout << "cena za agenciju je: " << putovi[i]->cenaAgencija() << endl;
	}
	void cenaZaPutnika(int i)
	{
		cout << "cena za putnika je: " << putovi[i]->cenaPutnik() << endl;
	}
	void ukupanBrNocenja(int i)
	{
		cout << "ukupan broj nocenja je: " << putovi[i]->ukBrNocenja() << endl;
	}

	void upisFajl(const char* putanja)
	{
		ofstream izlaz(putanja);
		if (izlaz.is_open())
		{
			for (int i = 0; i < tren; i++)
			{
				putovi[i]->upisi(izlaz);
			}
		}
		else throw "nisi ga otvorio";
	}
};

