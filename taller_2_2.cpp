#include<iostream>
using namespace std;


int main()
{
	int arr[6] = { 1,2,3,4,5,6 };
	int n, i, aux, aux1 = 0;
	cout << "Favor ingrese indice i" << endl;
	cin >> i;
	cout << "Favor ingrese numero n" << endl;
	cin >> n;
	aux = arr[i];
	arr[i] = n;
	++i;
	for (int j = i ; j < 6; ++j)
	{
		arr[i] = aux;
		++aux;
		++i;
	}
	cout << "El nuevo arreglo es el siguiente"<<" ";
	for (int i = 0; i < 6; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;



	return 0;
}
