// Template.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

extern "C" int ejecutivo(int valor1), administrativo(int valor2), operario(int valor3);

int main()
{
	int valor1, valor2, valor3, salida1, salida2, salida3;

	cout << "Ingrese el valor basico: ";
	cin >> valor1;
	salida1 = ejecutivo(valor1);
	salida2 = administrativo(valor1);
	salida3 = operario(valor1);

	cin.get();

	cout << "El salario del ejecutivo es $: " << salida1 << endl;

	cout << "El salario del administrativo es $: " << salida2 << endl;

	cout << "El salario del operario es $: " << salida3 << endl;



	system("PAUSE");
	return 0;
}
