//#include "stdafx.h"
//Codigo para determinar el valor de la hipotenusa ingresando los catetos
#include<iostream>
#include<math.h>
using namespace std;


int main()
{
	double a, b, c;
	a = b = c = 0;
	cout << "Favor ingresar la magntud de los catetos " << endl;
	cin >> a >> b;
	c = sqrt(pow(a, 2) + pow(b, 2));
	cout << "El valor de la Hipotenusa es " << c << endl;
 


    return 0;
}
