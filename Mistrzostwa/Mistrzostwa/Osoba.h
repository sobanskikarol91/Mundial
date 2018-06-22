#pragma once

#include <string>
#include <iostream>
using namespace std;

class Osoba
{
	string imie, nazwisko;

protected:
	Osoba() {}
	Osoba(string imie, string nazwisko) : imie(imie), nazwisko(nazwisko) {}
	virtual void wyswietl() 
	{
		cout << imie << " " << nazwisko << endl;
	}
};

