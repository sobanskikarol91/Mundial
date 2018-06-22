#pragma once
#include "Kraj.h"

class Mecz
{
	Kraj * kraj1, *kraj2;
	int k1_wynik, k2_wynik;
	string data;

public:
	Mecz(string data, Kraj * kraj1, Kraj * kraj2, int k1_wynik, int k2_wynik)
		: kraj1(kraj1), kraj2(kraj2), k1_wynik(k1_wynik), k2_wynik(k2_wynik), data(data) {}

	friend ostream & operator<<(ostream & ekran, Mecz m)
	{
		return ekran << m.data << " "<< *m.kraj1 << " " << m.k1_wynik << " : " << m.k2_wynik << " " << *m.kraj2 << "   " << endl;
	}
};

