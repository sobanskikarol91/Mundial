#pragma once
#include "Pilkarz.h"

class Napastnik :public Pilkarz
{
public:
	Napastnik(string imie, string nazwisko) : Pilkarz(imie, nazwisko, "Napastnik") {}
};

