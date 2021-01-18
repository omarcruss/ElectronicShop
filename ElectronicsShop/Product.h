#pragma once
#include <iostream>
using namespace std;

class Product
{
private:
	string _name;
	string _manufactuer;
	int _id;
	double _price;

public:
	Product(string name, string manufactuer, int id, double price);
	~Product();
	string GetName();
	string GetManufactuer();
	int GetId();
	double GetPrice();
};