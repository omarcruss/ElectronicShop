#pragma once
#include "Product.h"
#include "AbstractStringOutput.h"
#include <iostream>
#include <sstream>

class OrderItem : public AbstractStringOutput
{
private:
	Product* _product;
	int _pieces;
public:
	OrderItem(Product* product, int pieces);
	~OrderItem();
	int GetPieces();
	virtual int GetTotalPrice();
	virtual string ToString();
};

