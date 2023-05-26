#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct Item
{
	string
		name,
		priority,
		description;
	int
		date[3],
		time[2];
};

#ifndef HEADER_H
#define HEADER_H

void data(vector<Item>& item, int& size);
void print(vector<Item>& item, int& size);

int checkV();

#endif
