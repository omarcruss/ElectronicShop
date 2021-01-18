#pragma once
#include "Product.h"

class Tablet : public Product
{
private:
	double _diagonal;
public:
	Tablet(string name, string manufactuer, int id, double price, double diagonal);
	~Tablet();
};

