#include<iostream>
#include<vector>
#include<string>
#include<Windows.h>
#include"header.h"
using namespace std;

void add(vector<Item>& item, int& size)
{
	int n = 0, i = 0;
	cout << "\n Enter qty new position to add: ";
	n = checkV();

	int size2 = size + n;
	item.reserve(size2);

	Item* temp = new Item[n];

	while (i < n)
	{
		cout << "\n Pos " << size + 1;
		cout << "\n Name: ";
		getline(cin, temp[i].name);

		cout << "\n Priority: ";
		getline(cin, temp[i].priority);

		cout << "\n Description: ";
		getline(cin, temp[i].description);

		cout << "\n Date: ";
		Date(temp, i);

		cout << "\n Time: ";
		Time(temp, i);

		item.push_back(temp[i]);
		i++;
		system("CLS");
	}

	delete[] temp;
	temp = nullptr;

	print(item, size2);
}