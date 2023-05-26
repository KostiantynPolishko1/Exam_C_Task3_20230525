#include<iostream>
#include<string>
#include<vector>
#include"header.h"
using namespace std;

//Task3

int main()
{
	int size = 5;
	vector<Item> item;
	item.reserve(size);

	data(item, size);
	print(item, size);

	return 0;
}