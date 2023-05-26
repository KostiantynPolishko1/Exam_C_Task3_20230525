#include<iostream>
#include<vector>
#include<string>
#include<Windows.h>
#include"header.h"
using namespace std;

void remove(vector<Item>& item, int& size)
{
	int n = 0, j = 0;
	cout << "\n Enter qty of position to delete: ";
	n = checkV();

	int size2 = size - n;
	int* arr = new int[n];

	cout << endl;

	while (j < n)
	{
		cout << " Enter number of position deleted: ";

		arr[j] = checkV() - 1;
		if (arr[j] > size + n)
		{
			cout << "\n Position is out of range 1..." << size << endl;
			continue;
		}
		j++;
	}

	int pos = 0;
	for (int i = 0; i < n; i++)
	{
		pos = arr[i] - i;
		auto iter = item.cbegin();
		item.erase(iter + pos);
	}
	item.resize(size2);

	delete[] arr;
	arr = nullptr;

	system("CLS");
	print(item, size2);
}
