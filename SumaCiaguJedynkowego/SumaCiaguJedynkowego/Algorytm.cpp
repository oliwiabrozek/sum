#include "Algorytm.h"
#include <list>

Algorytm::Algorytm()
{
	this->dlugoscCiagu = 0;
	this->sumaElementow = 0;
}

Algorytm::Algorytm(int dlugoscCiagu, int sumaElementow)
{
	this->dlugoscCiagu = dlugoscCiagu;
	this->sumaElementow = sumaElementow;
}

int Algorytm::sumujPodzbior()
{
	int sumaPodzbioru = 0; // 1+ 2 + ... + (dlugoscCiagu - 1)

	for (int i = 1; i <= dlugoscCiagu; i++)
	{
		sumaPodzbioru += i;
	}

	std::cout << "sumaPodzbioru = " << sumaPodzbioru << std::endl;
	return sumaPodzbioru;
}

bool Algorytm::czyParzysta(int sumaPodzbioru)
{
	
	if (!((sumaElementow+sumaPodzbioru) % 2))
		return true;
	else
		return false;
}

bool Algorytm::czyNalezy(int sumaPodzbioru)
{
	if ((dlugoscCiagu > (-1 * sumaPodzbioru)) && (dlugoscCiagu < sumaPodzbioru))
		return true;
	else
		return false;
}

void Algorytm::rozklad()
{
	int elementCiagu = 0;
	ciagJedynkowy.push_back(elementCiagu);
	dlugoscCiagu--;

	int sumaPodzbioru = sumujPodzbior();
	int sumaPomocnicza = (sumaElementow + sumaPodzbioru) / 2;


	if (czyParzysta(sumaPodzbioru))
	{
		if (czyNalezy(sumaPodzbioru))
		{
			while (dlugoscCiagu > 0)
			{
				if ((sumaPomocnicza > dlugoscCiagu) || (dlugoscCiagu == 1))
				{
					std::cout << dlugoscCiagu << std::endl;
					sumaPomocnicza -= dlugoscCiagu;
					ciagJedynkowy.push_back(++elementCiagu);
				}
				else
					ciagJedynkowy.push_back(--elementCiagu);
				dlugoscCiagu--;
			}
		}
		else
			std::cout << "Nie nale¿y!" << std::endl;
	}
	else
		std::cout << "Nieparzysta!" << std::endl;
		
	for (int x : ciagJedynkowy)
		std::cout << x << " ";
}

Algorytm::~Algorytm()
{
}
