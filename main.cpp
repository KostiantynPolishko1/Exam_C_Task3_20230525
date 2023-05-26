#include<iostream>
#include<string>
#include<vector>
#include<Windows.h>
#include"header.h"
using namespace std;

//Task3

int main()
{
	int size = 10, fun = 10;
	vector<Item> item;
	item.reserve(size);

	data(item, size);
	print();

	bool tf = true;
	while (tf)
	{
		fun = checkV();
		
		if (fun == 0)
		{
			cout << "\n\tSTOP. EXIT\n";
			break;
		}
		fun--;

		if (fun > 7)
		{
			cout << "\n\tPosition is out of range 1...7";
			continue;
		}
		void(*operation[7])(vector<Item> &, int&) = { print, add, remove, modify, find, list, sort };
		operation[fun](item, size);
	}

	return 0;
}