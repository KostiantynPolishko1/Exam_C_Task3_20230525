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

void find(vector<Item>& item, int& size);
void find(vector<Item>& item, int& size, int& n);

void print(vector<Item>& item, int& size);
void print(vector<Item>& item, vector<int>& num);
void print(int& n);

int Date();
int checkV();

#endif
