//Fişierul text NR.TXT conţine pe o singură linie, separate prin câte un spaţiu, cel mult 100 de
//numere întregi, fiecare număr având cel mult 4 cifre.Scrieţi un program C / C++ care citeşte
//numerele din fişierul NR.TXT şi afişează pe ecran, separate prin câte un spaţiu, în ordine
//crescătoare, toate numerele naturale nenule din fişier.Dacă nu există astfel de numere se
//va afişa pe ecran mesajul NU EXISTA.
//Exemplu: dacă fişierul NR.TXT conţine numerele : -3 - 10 0 7 - 5 7 51 - 800 6 3798,
//	atunci pe ecran se va afişa : 6 7 7 51 3798

#pragma once

#include <iostream>
#include <fstream>
#include <algorithm>

#define SIZE 100

std::ifstream in("nr.txt");


int main()
{
	int numere = 0;

	int vector[SIZE];
	int i = 1;

	while (!in.eof())
	{
		int nTemp;

		in >> nTemp;

		std::cout << nTemp << std::endl;

		if (nTemp > 0)
		{
			vector[i] = nTemp;
			i++;
		}
	}

	std::sort(&vector[1], &vector[i]);

	for (int j = 1; j <= i - 1; j++)
	{
		std::cout << vector[j] << " ";
	}

	std::cin.get();
}

