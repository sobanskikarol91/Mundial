#pragma once
#include "Osoba.h"

class Pilkarz : public Osoba
{
	string pozycja;
public:
	Pilkarz(string imie, string nazwisko, string pozycja) : Osoba(imie, nazwisko), pozycja(pozycja) {}

	void wyswietl() override
	{
		cout << pozycja << endl;
		Osoba::wyswietl();
	}
};

