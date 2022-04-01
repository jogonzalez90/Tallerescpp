//#include "stdafx.h"
//Este programa, solicita al usuario ingresar un vector
//de 10 números. A continuacion le permite escoger de
//entre estos uno, para determinar la cantidad de veces
//que fue ingresado.
#include<iostream>
using namespace std;


int main()
{
	int n , m = 0;
	int arr[10] = { 0 };
	cout << "Este programa solicita el ingreso de un vector de 10 numeros" << endl;
	cout << "por ultimo realiza un conteo del numeros de veces que aparece" << endl;
	cout << "un nemuro n ingresado" << endl;
	for (int i = 0; i < 10 ; ++i)
	{
		cout << "Favor ingresar digito "<< i << endl;
		cin >> arr[i]; 
	}
	cout << "Los digitos ingresados son= ";
	for (int i = 0; i < 10; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "Favor ingresar nuevo digito" << endl;
	cin >> n;
	for (int i = 0; i < 10; ++i)
	{
		if (arr[i]==n)
		{
			++m;
		}
		
	}
	cout << "El numero de veces que aparece n en el vector es " << m << endl;
	return 0;
}
