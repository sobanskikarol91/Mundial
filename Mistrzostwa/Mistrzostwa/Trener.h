#pragma once
#include "Osoba.h"

class Trener : public Osoba
{
public:
	Trener() {}
	Trener(string imie, string nazwisko) : Osoba(imie, nazwisko) {}

	void wyswietl()
	{
		cout << "Trener: ";
		Osoba::wyswietl();
	}
};

