#pragma once
#include <iostream>
using namespace std;

class Statystyki
{
	int remis, porazka, wygrana, punkty, meczy;
public:
	Statystyki() : remis(0), wygrana(0), porazka(0), punkty(0), meczy(0) {};
	Statystyki(int remis, int wygrana, int porazka, int punkty, int meczy)
		: remis(remis), wygrana(wygrana), porazka(porazka), punkty(punkty), meczy(meczy) {}

	void wyswietl() 
	{
		cout << meczy << " " << wygrana << " " << remis << " " << porazka << " " << punkty;
	}
};

