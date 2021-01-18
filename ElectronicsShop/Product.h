#pragma once
#include "AbstractStringOutput.h"
#include <string>
using namespace std;

class Product : public AbstractStringOutput
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
	virtual string ToString() = 0;
};