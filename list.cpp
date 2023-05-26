#include<iostream>
#include<string>
#include<vector>
#include<stdlib.h>
#include<Windows.h>
#include"header.h"

using namespace std;

void list(vector<Item>& item, int& size, int& n)
{
	bool tf = true;
	int count = 0, date = 0, a = 0;
	string fname, txt;
	vector<int> num;
	num.reserve(size);

	do
	{
		switch (n)
		{
		case 1:
			cout << " Date of day";
			date = Date();

			for (int i = 0; i < size; i++)
			{
				if (date == item[i].date[0]*10000 + item[i].date[1] * 100 + item[i].date[2])
				{
					num.push_back(i);
					count++;
					tf = false;
				}
			}
			break;

		case 2:
			cout << " Start date";
			date = Date();

			for (int i = 0; i < size; i++)
			{
				if ((item[i].date[0] * 10000 + item[i].date[1] * 100 + item[i].date[2] >= date) && 
					(item[i].date[0] * 10000 + item[i].date[1] * 100 + item[i].date[2] < date + 7))
				{
					num.push_back(i);
					count++;
					tf = false;
				}
			}
			break;

		case 3:
			cout << " Enter \"Month\" -> ";
			date = checkV();

			for (int i = 0; i < size; i++)
			{
				if (date == item[i].date[1])
				{
					num.push_back(i);
					count++;
					tf = false;
				}
			}
			break;
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
				continue;
		}

		num.resize(count);
		system("CLS");
		print(item, num);

	} while (tf != false);
}

void list(vector<Item>& item, int& size)
{
	int n = 0;

	while (true)
	{
		cout
			<< "\n\t1 - for day"
			<< "\n\t2 - for week"
			<< "\n\t3 - for month"
			<< endl;
		cout << "\n Enter number subpositioin -> ";

	restart:
		n = checkV();
		if (n > 3 || n == 0)
		{
			cout << "\n Number is out of range 1...3";
			cout << "\n Enter number subpositioin -> ";
			goto restart;
		}
		list(item, size, n);

		cout << "\n Press \"0\" - stop or \"1\" - continue: ";
		n = checkV();
		if (!n)
		{
			cout << "\n\tSTOP. EXIT\n";
			break;
		}
	}
}