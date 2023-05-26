#include<iostream>
#include<vector>
#include<string>
#include"header.h"
using namespace std;

#define spacex1(x) (x < 6 ? "\t\t  " : "\t  ")
#define spacex2(x) (x <= 12 ? "\t\t  " : "\t  ")

#define time1(x1, x2) \
((x1 < 10 ? "0" + to_string(x1) : to_string(x1)) + ":" +\
(x2 < 10 ? "0" + to_string(x2) : to_string(x2)))

#define date1(y1, y2) ((item[i].date[1] < 10 ? "0" + to_string(item[i].date[1]) : to_string(item[i].date[1])) \
+ "." + (item[i].date[2] < 10 ? "0" + to_string(item[i].date[2]) : to_string(item[i].date[2])))

void print(vector<Item>& item, int& size)
{

	cout << "\n To-do list: ";
	cout
		<< "\n| Pos " << "| Name\t" << "| Priority\t" << "| Desciption\t\t"
		<< "| Date\t\t" << "| Time\n";

	for (int i = 0; i < size; i++)
	{
		cout
			<< "  " << i + 1 << "\t"
			<< item[i].name << "\t  "
			<< item[i].priority << spacex1(item[i].priority.length())
			<< item[i].description << spacex2(item[i].description.length())
			<< to_string(item[i].date[0]) + "." + date1(item[i].date[1], item[i].date[2])
			<< "\t  "
			<< time1(item[i].time[0], item[i].time[1])
			<< endl;
	}
}