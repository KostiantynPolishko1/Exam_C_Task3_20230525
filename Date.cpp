#include<iostream>
#include"header.h"

using namespace std;

int Date()
{
	int year = 0, month = 0, day = 0;

	cout << "\n Enter: " << "Year -> ";
	year = checkV();

	cout << "\t Month -> ";
	month = checkV();

	cout << "\t Day -> ";
	day = checkV();

	return year * 10000 + month * 100 + day;
}

Item Date(Item *temp, int &i)
{
	cout << "\n Enter: " << "Year -> ";
	temp[i].date[0] = checkV();

	cout << "\t Month -> ";
	temp[i].date[1] = checkV();

	cout << "\t Day -> ";
	temp[i].date[2] = checkV();

	return *temp;
}

vector<Item> Date(vector<Item>& item, int& i)
{
	cout << "\n Enter: " << "Year -> ";
	item[i].date[0] = checkV();

	cout << "\t Month -> ";
	item[i].date[1] = checkV();

	cout << "\t Day -> ";
	item[i].date[2] = checkV();

	return item;
}

Item Time(Item* temp, int& i)
{
	cout << "\n Enter: " << "Hours -> ";
	temp[i].time[0] = checkV();

	cout << "\t Minutes -> ";
	temp[i].time[1] = checkV();

	return *temp;
}

vector<Item> Time(vector<Item>& item, int& i)
{
	cout << "\n Enter: " << "Hours -> ";
	item[i].time[0] = checkV();

	cout << "\t Minutes -> ";
	item[i].time[1] = checkV();

	return item;
}