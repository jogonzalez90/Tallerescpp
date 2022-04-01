//#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	char palabra[10] = { 0 };

	cout << "Ingrese la palabra a invertir:" << endl;
	cin >> palabra;
	for (int i = 9; i >= 0; --i) {
		cout << palabra[i] << " ";

	}
	cout << endl;
	return 0;
}

