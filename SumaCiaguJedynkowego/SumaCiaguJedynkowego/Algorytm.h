#pragma once

#include <iostream>
#include <list>

class Algorytm
{
	int dlugoscCiagu;
	int sumaElementow;
	std::list<int> ciagJedynkowy;

public:

	Algorytm();
	Algorytm(int dlugoscCiagu, int sumaElementow);
	int sumujPodzbior();
	bool czyParzysta(int sumaPodzbioru);
	bool czyNalezy(int sumaPodzbioru);
	void rozklad();
	~Algorytm();

};