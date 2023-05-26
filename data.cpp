#include<iostream>
#include<vector>
#include<string>
#include"header.h"
using namespace std;

void data(vector<Item>& item, int& size)
{
	const int size2 = 5;
	Item temp[size2];
	string arr_p[3] = { "High", "Middle", "Low"};

	temp[0] = { "Work", arr_p[1], "call JVKC", {2023, 5, 10}, {12, 15} };
	temp[1] = { "City", arr_p[1], "mail CIMOLAI", {2023, 5, 19}, {8, 5} };
	temp[2] = { "Academy", arr_p[2], "hometask", {2023, 6, 1}, {10, 12} };
	temp[3] = { "Village", arr_p[2], "cut green", {2023, 5, 30}, {16, 18} };
	temp[4] = { "Hospit", arr_p[0], "medicine for mom", {2023, 4, 20}, {19, 30} };

	for (int i = 0; i < size; i++)
		item.push_back(temp[i]);
}