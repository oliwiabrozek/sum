#include "Algorytm.h"
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "polish");
	//std::cout << "���" << std::endl;
	Algorytm algorytm(6,5);
		
	algorytm.rozklad();

	return 0;
}