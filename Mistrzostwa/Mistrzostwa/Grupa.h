#pragma once
#include "Kraj.h"
#include <iostream>
#include <vector>
#include "Menu.h"

using namespace std;

class Grupa : public Menu
{
	string nazwa;
	vector<Kraj> kraje;

public:
	Grupa() {};
	Grupa(string nazwa, vector<Kraj> kraje) : kraje(kraje), nazwa(nazwa) {};

	void wyswietl()
	{
		cout << "Grupa: " << nazwa << endl;
		cout << "============================" << endl;
		cout << "M Z R P Pu" << endl;
		for (size_t i = 0; i < kraje.size(); i++)
		{
			kraje[i].pobierz_statysyki().wyswietl();
			cout << "  " << kraje[i].pobierz_nazwa() << endl;
		}
		cout << endl;
	}

	void wybierz_kraj()
	{
		for (size_t i = 0; i < kraje.size(); i++)
			cout << i + 1 << ") " << kraje[i].pobierz_nazwa() << endl;

		int wybor = wybierz(kraje.size());

		kraje[wybor - 1].wyswietl_informacje();
	}

	friend ostream & operator <<(ostream & ekran, const Grupa  & grupa)
	{
		return ekran << grupa.nazwa;
	}
};

