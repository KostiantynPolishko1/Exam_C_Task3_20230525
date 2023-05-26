#include<iostream>
#include<string>
#include<vector>
#include"header.h"
using namespace std;

//Task3

int main()
{
	int size = 10;
	vector<Item> item;
	item.reserve(size);

	data(item, size);
	print(item, size);

	add(item, size);
	//find(item, size);
	//list(item, size);
	//sort(item, size);

	return 0;
}