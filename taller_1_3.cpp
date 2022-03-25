//#include "stdafx.h"
//Codigo para realizar dos posibles operaciones aritmeticas
//Si el valor de la primera variable ingresada es > 0 ejecutar el producto
//De lo contrario sumar la varibles
#include<iostream>
using namespace std;


int main()
{
	double a, b, c, d;
	a = b = c = d = 0;
	cout << "Favor ingresar tres variables a,b,c" << endl;
	cin >> a >> b >> c;
	if (a > 0)
	{
		d = a*b*c;
		cout << "El producto de los tres numeros es " <<  d << endl;
	}
	else
	{
		d = a + b + c;
		cout << "La suma de los tres numeros es " <<  d << endl;
	}
	
    return 0;
}

