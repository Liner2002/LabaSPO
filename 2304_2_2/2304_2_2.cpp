

#include <iostream>
#include <string>

using namespace std;

int F1(int x)
{
	if (x >= 0)
	{
		x = pow(double(x), 2);
	}
	else if (x < 0)
	{
		x = abs(x);
	}

	return x;
}

void F2(int &x)
{
	x = F1(x);
}

int main()
{
	setlocale(LC_ALL, "Russian");

	for (int i = 1; i < 11; i++)
	{
		cout << "Параметр до передачи в функцию: " + to_string(i) + " ... ";
		F2(i);
		cout << "параметр после передачи в функцию: " + to_string(i) << endl;
	}
}

