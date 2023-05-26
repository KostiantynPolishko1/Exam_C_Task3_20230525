#include<iostream>
#include<string>
#include<vector>
#include<stdlib.h>
#include<Windows.h>
#include"header.h"

using namespace std;

void sort(vector<Item>& item, int& size, int& n)
{
	string str{};
	if (n == 1)
		str = "by priority";
	else
		str = "by date & time";

	cout << "\n Sort by " << str;

	for (int i = 0; i < size; i++)
	{
		int sum = 0;
		for (int j = 0; j < size - 1; j++)
		{
			if (n == 1)
			{
				if (item[j].priority > item[j + 1].priority)
				{
					swap(item[j], item[j + 1]);
					sum++;
				}
			}
			else
			{
				if ((item[j].date[0] * 10000 + item[j].date[1] * 100 + item[j].date[2])
					> (item[j + 1].date[0] * 10000 + item[j + 1].date[1] * 100 + item[j + 1].date[2]))
					{
						swap(item[j], item[j + 1]);
						sum++;
					}
			}
		}
		if (!sum)
			break;
	}

	system("CLS");
	print(item, size);

}

void sort(vector<Item>& item, int& size)
{
	int n = 0;
	cout
		<< "\n\t1 - by priority"
		<< "\n\t2 - by date & time"
		<< endl;

	while (true)
	{
		cout << "\n Enter number subpositioin -> ";

	restart:
		n = checkV();
		if (n > 2 || n == 0)
		{
			cout << "\n Number is out of range 1...2";
			cout << "\n Enter number subpositioin -> ";
			goto restart;
		}
		sort(item, size, n);

		cout << "\n Press \"0\" - stop or \"1\" - continue: ";
		n = checkV();
		if (!n)
		{
			system("CLS");
			cout << "\n\tSTOP. EXIT\n";
			break;
		}

		cout
			<< "\n\t1 - by priority"
			<< "\n\t2 - by date & time"
			<< endl;
	}
}