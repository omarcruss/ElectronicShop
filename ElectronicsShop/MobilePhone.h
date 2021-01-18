#pragma once
#include "Product.h"

class MobilePhone : public Product 
{
private:
	string _simOperator;
public:
	MobilePhone(string name, string manufactuer, int id, double price, string simOperator);
	~MobilePhone();
};

