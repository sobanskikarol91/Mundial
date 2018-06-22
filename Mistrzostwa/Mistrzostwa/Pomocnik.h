#pragma once
#include "Pilkarz.h"
class Pomocnik : public Pilkarz
{
public:
	Pomocnik(string imie, string nazwisko) : Pilkarz(imie, nazwisko, "Pomocnik") {}
};

