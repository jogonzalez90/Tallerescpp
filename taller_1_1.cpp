//#include "stdafx.h"
//Este codigo realiza la sumatoria de 4 varibles ingresados por el usuario
#include<iostream>
using namespace std;


int main()
{
	int a, b, c, d, e;
	a = b = c = d = e = 0;
	cout << "Favor ingresar las cuatro variables  a,b,c,d," << endl;
	cin >> a >> b >> c >> d;
	e = a + b + c + d;
	cout << "La suma de las variables es "<< e << endl;


    return 0;
}
