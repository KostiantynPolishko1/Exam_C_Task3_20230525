#include<iostream>
#include<string>
#include<vector>
#include<stdlib.h>
#include<Windows.h>
#include"header.h"

using namespace std;

void find(vector<Item>& item, int& size, int& n)
{
	bool tf = true;
	int count = 0, date = 0, a = 0;
	string fname, txt;
	vector<int> num;
	num.reserve(size);

	print(n);

	do
	{
		if (n == 4)
		{
			date = Date();
		}
		else
		{
			getline(cin, fname);
		}

		for (int i = 0; i < size; i++)
		{
			if (n != 4)
			{
				if (n == 1) txt = item[i].name;
				if (n == 2) txt = item[i].priority;
				if (n == 3) txt = item[i].description;

				if (txt.find(fname) != -1)
				{
					num.push_back(i);
					count++;
					tf = false;
				}
			}
			if (n == 4)
			{
				if (date == item[i].date[0] * 10000 + item[i].date[1] * 100 + item[i].date[2])
				{
					num.push_back(i);
					count++;
					tf = false;
				}
			}
		}

		if (tf)
		{
			cout << "\t!NO DATA FINDED!\n";
			cout << "\n Press \"0\" - stop or \"1\" - continue: ";
			a = checkV();
			if (!a)
			{
				cout << "\n\tSTOP. EXIT\n";
				break;
			}
			else
			{
				print(n);
				continue;
			}
				
		}

		num.resize(count);
		system("CLS");
		print(item, num);

	} while (tf != false);
}

void find(vector<Item>& item, int& size)
{
	int n = 0;

	while (true)
	{
		cout
			<< "\n\t1 - by name"
			<< "\n\t2 - by priority"
			<< "\n\t3 - by description"
			<< "\n\t4 - by date"
			<< endl;
		cout << "\n Enter number subpositioin -> ";

	restart:
		n = checkV();
		if (n > 4 || n == 0)
		{
			cout << "\n\t Number is out of range 1...4";
			goto restart;
		}
		find(item, size, n);

		cout << "\n Press \"0\" - stop or \"1\" - continue: ";
		n = checkV();
		if (!n)
		{
			cout << "\n\tSTOP. EXIT\n";
			print();
			break;
		}
	}
}