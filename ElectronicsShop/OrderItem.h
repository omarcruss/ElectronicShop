#pragma once
#include "Product.h"

class OrderItem
{
private:
	Product* _product;
	int _pieces;
public:
	OrderItem(Product* product, int pieces);
	~OrderItem();
	int GetPieces();
};

