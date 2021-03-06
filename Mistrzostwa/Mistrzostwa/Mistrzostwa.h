#pragma once

#include "Kraj.h"
#include "Pilkarz.h"
#include "Obronca.h"
#include "Bramkarz.h"
#include "Pomocnik.h"
#include "Napastnik.h"
#include <vector>
#include "Grupa.h"
#include "Mecz.h"
   
class Mistrzostwa : public Menu
{
	vector<Grupa> grupy;
	vector<Mecz> wyniki;

public:
	Mistrzostwa()
	{
		grupa_A();
		grupa_B();
		dodaj_wyniki();
	}

	void grupa_A()
	{
		// Polska
		Kraj polska("Polska", Trener("Adam", "Nawalka"), vector<Pilkarz>{
			Bramkarz("Wojciech", "Strzesny"),
				Obronca("Michal", "Pazdan"), Obronca("Thiago", "Cionek"), Obronca("Piszczek", "Piszczek"),
				Pomocnik("Maciej", "Rybus"), Pomocnik("Jakub", "Błaszczykowski"), Pomocnik("Piotr", "Zielinski"), Pomocnik("Grzegorz", "Krychowiak"),
				Napastnik("Kamil", "Grosicki"), Napastnik("Arkadiusz", "Milik"), Napastnik("Robert", "Lewandowski")},
			Statystyki(1, 0, 1, 0, 0));

		// Senegal
		Kraj senegal("Senegal", Trener("s1", "s1"), vector<Pilkarz>{
			Bramkarz("Wojciech", "Strzesny"),
				Obronca("Michal", "Pazdan"), Obronca("Thiago", "Cionek"), Obronca("Piszczek", "Piszczek"),
				Pomocnik("Maciej", "Rybus"), Pomocnik("Jakub", "Błaszczykowski"), Pomocnik("Piotr", "Zielinski"), Pomocnik("Grzegorz", "Krychowiak"),
				Napastnik("Kamil", "Grosicki"), Napastnik("Arkadiusz", "Milik"), Napastnik("Robert", "Lewandowski")},
			Statystyki(1, 1, 0, 0, 3));

		// Japonia
		Kraj japonia("Japonia", Trener("s1", "s1"), vector<Pilkarz>{
			Bramkarz("Wojciech", "Strzesny"),
				Obronca("Michal", "Pazdan"), Obronca("Thiago", "Cionek"), Obronca("Piszczek", "Piszczek"),
				Pomocnik("Maciej", "Rybus"), Pomocnik("Jakub", "Błaszczykowski"), Pomocnik("Piotr", "Zielinski"), Pomocnik("Grzegorz", "Krychowiak"),
				Napastnik("Kamil", "Grosicki"), Napastnik("Arkadiusz", "Milik"), Napastnik("Robert", "Lewandowski")},
			Statystyki(1, 1, 0, 0, 3));

		// Kolumbia
		Kraj kolumbia("Kolumbia", Trener("s1", "s1"), vector<Pilkarz>{
			Bramkarz("Wojciech", "Strzesny"),
				Obronca("Michal", "Pazdan"), Obronca("Thiago", "Cionek"), Obronca("Piszczek", "Piszczek"),
				Pomocnik("Maciej", "Rybus"), Pomocnik("Jakub", "Błaszczykowski"), Pomocnik("Piotr", "Zielinski"), Pomocnik("Grzegorz", "Krychowiak"),
				Napastnik("Kamil", "Grosicki"), Napastnik("Arkadiusz", "Milik"), Napastnik("Robert", "Lewandowski")},
			Statystyki(1, 0, 1, 0, 0));

		grupy.push_back(Grupa("A", vector<Kraj> {polska, senegal, japonia, kolumbia}));
	}

	void grupa_B()
	{
		// Portugalia
		Kraj portugalia("Portugalia", Trener("Adam", "Nawalka"), vector<Pilkarz>{
			Bramkarz("Wojciech", "Strzesny"),
				Obronca("Michal", "Pazdan"), Obronca("Thiago", "Cionek"), Obronca("Piszczek", "Piszczek"),
				Pomocnik("Maciej", "Rybus"), Pomocnik("Jakub", "Błaszczykowski"), Pomocnik("Piotr", "Zielinski"), Pomocnik("Grzegorz", "Krychowiak"),
				Napastnik("Kamil", "Grosicki"), Napastnik("Arkadiusz", "Milik"), Napastnik("Robert", "Lewandowski")},
			Statystyki(2, 1, 1, 0, 4));

		// Senegal
		Kraj hiszpania("Hiszpania", Trener("s1", "s1"), vector<Pilkarz>{
			Bramkarz("Wojciech", "Strzesny"),
				Obronca("Michal", "Pazdan"), Obronca("Thiago", "Cionek"), Obronca("Piszczek", "Piszczek"),
				Pomocnik("Maciej", "Rybus"), Pomocnik("Jakub", "Błaszczykowski"), Pomocnik("Piotr", "Zielinski"), Pomocnik("Grzegorz", "Krychowiak"),
				Napastnik("Kamil", "Grosicki"), Napastnik("Arkadiusz", "Milik"), Napastnik("Robert", "Lewandowski")},
			Statystyki(2, 1, 1, 0, 4));

		// Iran
		Kraj iran("Iran", Trener("s1", "s1"), vector<Pilkarz>{
			Bramkarz("Wojciech", "Strzesny"),
				Obronca("Michal", "Pazdan"), Obronca("Thiago", "Cionek"), Obronca("Piszczek", "Piszczek"),
				Pomocnik("Maciej", "Rybus"), Pomocnik("Jakub", "Błaszczykowski"), Pomocnik("Piotr", "Zielinski"), Pomocnik("Grzegorz", "Krychowiak"),
				Napastnik("Kamil", "Grosicki"), Napastnik("Arkadiusz", "Milik"), Napastnik("Robert", "Lewandowski")},
			Statystyki(2, 1, 0, 1, 3));

		// Maroko
		Kraj maroko("Maroko", Trener("s1", "s1"), vector<Pilkarz>{
			Bramkarz("Wojciech", "Strzesny"),
				Obronca("Michal", "Pazdan"), Obronca("Thiago", "Cionek"), Obronca("Piszczek", "Piszczek"),
				Pomocnik("Maciej", "Rybus"), Pomocnik("Jakub", "Błaszczykowski"), Pomocnik("Piotr", "Zielinski"), Pomocnik("Grzegorz", "Krychowiak"),
				Napastnik("Kamil", "Grosicki"), Napastnik("Arkadiusz", "Milik"), Napastnik("Robert", "Lewandowski")},
			Statystyki(2, 0, 0, 2, 0));

		grupy.push_back(Grupa("B", vector<Kraj> {portugalia, hiszpania, iran, maroko}));
	}

	void dodaj_wyniki()
	{
		wyniki = vector<Mecz>{
			Mecz("19.06.2018", grupy[0].znajdz_kraj("Kolumbia"), grupy[0].znajdz_kraj("Japonia"), 1, 2),
			Mecz("14.06.2018", grupy[0].znajdz_kraj("Polska"), grupy[0].znajdz_kraj("Senegal"), 1, 2),

			//Grupa B
			Mecz("15.06.2018", grupy[1].znajdz_kraj("Maroko"), grupy[1].znajdz_kraj("Iran"), 1, 2),
			Mecz("15.06.2018", grupy[1].znajdz_kraj("Portugalia"), grupy[1].znajdz_kraj("Hiszpania"),3, 3),
			Mecz("20.06.2018", grupy[1].znajdz_kraj("Portugalia"), grupy[1].znajdz_kraj("Maroko"), 1, 0),
			Mecz("20.06.2018", grupy[1].znajdz_kraj("Iran"), grupy[1].znajdz_kraj("Hiszpania"),0, 1)

			// dodac inne grupy nalezy zwrocic uwage na kolejnosc dodawania oraz do jakiego indeksu sie zwracamy
			// w konstruktorze Mistrzostwa dodajemy grupy i w takiej kolejnosci nalezzy przeszukiwac graje
		};
	}

	void naglowek()
	{
		cout << "=====================================" << endl;
		cout << "MISTORZSTWA SWIATA" << endl;
		cout << "=====================================" << endl;
	}

	void menu()
	{
		naglowek();
		cout << "1. Grupy" << endl;
		cout << "2. Wyniki" << endl;
		cout << "3. Sklad" << endl;
		cout << "4. Wyjscie" << endl;
		int wybor = wybierz(4);
		naglowek();

		switch (wybor)
		{
		case 1:
			grupy_informacje();
			break;
		case 2:
			wyswietl_wyniki();
			break;
		case 3:
			sklad();
			break;
		case 4:
			wyjscie();
			break;
		default:
			break;
		}

		nacisnij_klawisz();
		menu();
	}

	void grupy_informacje()
	{
		for (size_t i = 0; i < grupy.size(); i++)
			grupy[i].wyswietl();
	}

	void wyswietl_wyniki()
	{
		for (size_t i = 0; i < wyniki.size(); i++)
		{
			cout << wyniki[i];
		}
	}

	void sklad()
	{
		for (size_t i = 0; i < grupy.size(); i++)
			cout << i + 1 << ") Grupa: " << grupy[i] << endl;

		int wybor = wybierz(grupy.size());

		grupy[wybor - 1].wybierz_kraj();
	}
};

