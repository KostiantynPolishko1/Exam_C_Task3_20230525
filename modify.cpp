#include<iostream>
#include<vector>
#include<string>
#include<Windows.h>
#include"header.h"
using namespace std;

void modify(vector<Item>& item, int& size)
{
	int i = 0;

	while (true)
	{
		cout << "\n Indicate position for modify: ";
		i = checkV();
		if (i > size || i == 0)
		{
			cout << "\n Position is out of range 1..." << size << endl;
			continue;
		}
		i--;

		cout << "\n Pos " << i+1 << endl;
		cout << " Name: ";
		getline(cin, item[i].name);

		cout << " Priority: ";
		getline(cin, item[i].priority);

		cout << " Description: ";
		getline(cin, item[i].description);

		cout << " Date: ";
		Date(item, i);

		cout << " Time: ";
		Time(item, i);

		system("CLS");
		print(item, size);

		cout << "\n Press \"0\" - stop or \"1\" - continue: ";
		i = checkV();
		if (!i)
		{
			cout << "\n\tSTOP. EXIT\n";
			break;
		}
		i = 0;
	}
}