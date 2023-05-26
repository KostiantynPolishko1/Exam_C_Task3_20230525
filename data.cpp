#include<iostream>
#include<vector>
#include<string>
#include"header.h"
using namespace std;

void data(vector<Item>& item, int& size)
{
	const int size2 = 10;
	Item temp[size2];
	string arr_p[3] = { "High", "Middle", "Low"};

	temp[0] = { "Work",		arr_p[1], "call JVKC",			{2023, 5, 10}, {12, 15} };
	temp[1] = { "City",		arr_p[1], "mail CIMOLAI",		{2023, 5, 19}, {8, 5} };
	temp[2] = { "Academy",	arr_p[2], "hometask",			{2023, 6, 1}, {10, 12} };
	temp[3] = { "Village",	arr_p[2], "cut green",			{2023, 5, 30}, {16, 18} };
	temp[4] = { "Hospit",	arr_p[0], "medicine for mom",	{2023, 4, 20}, {19, 30} };
	temp[5] = { "City",		arr_p[2], "buy foods",			{2023, 5, 26}, {20, 30} };
	temp[6] = { "Work",		arr_p[1], "finish project",		{2023, 6, 15}, {19, 0} };
	temp[7] = { "Academy",	arr_p[0], "close home task",	{2023, 5, 29}, {21, 10} };
	temp[8] = { "Village",	arr_p[1], "clean roud",			{2023, 5, 27}, {9, 0} };
	temp[9] = { "Work",		arr_p[2], "answer to client",	{2023, 6, 1}, {10, 25} };

	for (int i = 0; i < size; i++)
		item.push_back(temp[i]);
}