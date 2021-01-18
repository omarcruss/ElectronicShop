#pragma once
#include "Product.h"
#include <iostream>
#include <sstream>

class Tablet : public Product
{
private:
	double _diagonal;
public:
	Tablet(string name, string manufactuer, int id, double price, double diagonal);
	virtual string ToString();
	double GetDiagonal();
};

