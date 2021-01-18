#pragma once
#include "Product.h"
#include "OrderItem.h"
#include <iostream>
#include <sstream>

class MobilePhone : public Product
{
private:
	string _simOperator;
	int _memory;
public:
	MobilePhone(string name, string manufactuer, int id, double price, int memory, string simOperator);
	virtual string ToString();
	string GetSimOperator();
	int GetMemory();
};