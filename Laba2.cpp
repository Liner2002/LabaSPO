// ConsoleApplication4.cpp: определяет точку входа для консольного приложения.
//
#include <iostream>
#include<math.h>
using namespace std;

void F1(double* x, double n)
{
	cout << "Polozhitelni massive: ";
	for (int i = 0; i < n; i++)
		if (x[i] > 0)
			cout << x[i] << " ";
	cout << "Otricatelni massive: ";
	int a = 0;
	for (int i = 0; i < n; i++)
		if (x[i] < 0) {
			a += 1;
			cout << x[i] << " ";
		}
	




}


int main()

{
	int n;
	cout << "Razmer: ";
	cin >> n;
	double* m = new double[n];
	cout << "Massiv: ";
	for (int i = 0; i < n; i++)
	{
		cin >> m[i];
	}
	F1(m, n);
	int b;
	

	system("pause");
	return 0;

}