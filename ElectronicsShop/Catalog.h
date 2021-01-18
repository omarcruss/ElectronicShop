#pragma once
#include "Product.h"
#include <list>

class Catalog
{
private:
	list<Product*> _products;
public:
	Catalog();
	~Catalog();

	void AddNewProduct(Product* product);
	Product* GetAllProducts();
};

