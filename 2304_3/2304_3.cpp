#include <iostream>
#include <string>
#include <vector>

using namespace std;

void F1(int* list, int countList)
{
	vector<int> positives;
	vector<int> negatives;

	for (int i = 0; i < countList; i++)
	{
		if (list[i] >= 0)
		{
			positives.push_back(list[i]);
		}
		else
		{
			negatives.push_back(list[i]);
		}
	}	
	
	cout << "Вывод списка с положительными элементами" << endl;
	for (int i = 0; i < positives.size(); i++)
	{
		cout << positives[i] << endl;
	}	

	cout << "\n\nВывод списка с отрицательными элементами" << endl;
	for (int i = 0; i < negatives.size(); i++)
	{
		cout << negatives[i] << endl;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");

	int n;
	cout << "Введите N" << endl;
	cin >> n;

	int* list = new int[n];

	for (int i = 1; i <= n; i++)
	{
		cout << "Введите число №" + to_string(i) + " :";
		cin >> list[i - 1];
	}

	F1(list, n);
}
