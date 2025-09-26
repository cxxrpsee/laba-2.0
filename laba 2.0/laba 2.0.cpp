// Lab_2.1.cpp
// < Лебединський Артем >
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 11
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double m; // вхідний параметр
	double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу
	cout << "m = "; cin >> m;
	z1 = (1 - 2 * (sin(m)) * (sin(m))) / (1 + sin(2 * m)); // операція для z1
	z2 = (1 - tan(m)) / (1 + tan(m)); // операція для z2
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}