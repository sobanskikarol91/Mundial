#pragma once
#include <iostream>
using namespace std;

class Menu
{
public:
	int wybierz(int max, int min = 1)
	{
		int wybor;

		while (true)
		{
			cin >> wybor;
			cin.ignore();
			system("cls");
			if (wybor < min || wybor > max)
				cout << "Wprowadz poprawne dane!" << endl;
			else return wybor;
		}
	}

	void nacisnij_klawisz()
	{
		cout << "Nacisnij klawisz aby przejsc dalej..." << endl;
		getchar();
		system("cls");
	}

	void wyjscie()
	{
		cout << "Wyjscie z programu" << endl;
		nacisnij_klawisz();
		exit(0);
	}
};

