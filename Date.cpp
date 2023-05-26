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