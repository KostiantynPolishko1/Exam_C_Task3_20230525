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

Item Time(Item* temp, int& i)
{
	cout << "\n Enter: " << "Hours -> ";
	temp[i].time[0] = checkV();

	cout << "\t Minutes -> ";
	temp[i].time[1] = checkV();

	return *temp;
}