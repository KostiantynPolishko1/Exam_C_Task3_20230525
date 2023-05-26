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

void add(vector<Item>& item, int& size);
void remove(vector<Item>& item, int& size);
void modify(vector<Item>& item, int& size);

void find(vector<Item>& item, int& size);
void find(vector<Item>& item, int& size, int& n);

void list(vector<Item>& item, int& size);

void sort(vector<Item>& item, int& size);
void sort(vector<Item>& item, int& size, int& n);

void print(vector<Item>& item, int& size);
void print(vector<Item>& item, vector<int>& num);
void print(int& n);
void print();

int Date();

Item Date(Item *temp, int &i);
vector<Item> Date(vector<Item>& item, int& i);

Item Time(Item* temp, int& i);
vector<Item> Time(vector<Item>& item, int& i);

int checkV();

#endif
