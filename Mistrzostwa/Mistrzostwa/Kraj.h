#pragma once
#include "Pilkarz.h"
#include <vector>
#include "Trener.h"
#include "Statystyki.h"

class Kraj
{
	string nazwa;
	vector<Pilkarz> druzyna;
	Trener trener;
	Statystyki statystyki;

public:
	Kraj() {};
	Kraj(string nazwa, Trener trener, vector<Pilkarz> druzyna, Statystyki statystyki)
		: nazwa(nazwa), druzyna(druzyna), trener(trener), statystyki(statystyki) {}

	void wyswietl_informacje()
	{
		cout << nazwa << endl;
		trener.wyswietl();
		cout << "------------------------------------" << endl;

		for (size_t i = 0; i < druzyna.size(); i++)
		{
			cout << "------------------------------------" << endl;
			druzyna[i].wyswietl();
		}
	}

	inline string pobierz_nazwa() { return nazwa; }

	Statystyki  pobierz_statysyki()
	{
		return statystyki;
	}
};

