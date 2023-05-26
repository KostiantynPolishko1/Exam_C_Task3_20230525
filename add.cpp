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
	int n2 = n;

	Item* temp = new Item[n];

	while (i < n)
	{
		size++;
		item.reserve(size);
		
		cout << "\n Pos " << size << endl;
		n2--;
		cout << " Name: ";
		getline(cin, temp[i].name);

		cout << " Priority: ";
		getline(cin, temp[i].priority);

		cout << " Description: ";
		getline(cin, temp[i].description);

		cout << " Date: ";
		Date(temp, i);

		cout << " Time: ";
		Time(temp, i);

		item.push_back(temp[i]);
		i++;

		system("CLS");
		print(item, size);
	}

	delete[] temp;
	temp = nullptr;

	print();
}