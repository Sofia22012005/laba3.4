// Lab_03_4.cpp
// < Кульчицька Софія Олександрівна >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 7

#include <cmath>
#include <iostream>
using namespace std;
int main() {
	double x;
	double y;
	double R;
	cout << "Enter x: "; cin >> x;
	cout << "Enter y: "; cin >> y;
	cout << "Enter R: "; cin >> R;

	if (((x + R) * (x + R) + (y - R) * (y - R) <= R * R)  || ((x>=0 && x <=2*R) && (y<=0 && y>=-R)))
		
		cout << "yes" << endl;
	else
		cout << "no";




	return 0;
}