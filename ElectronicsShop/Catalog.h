#pragma once
#include "Product.h"
#include "AbstractStringOutput.h"
#include <list>
#include <iostream>

using namespace std;

class Catalog
{
private:
	list<Product*> _products;
public:
	Catalog();
	~Catalog();

	void AddNewProduct(Product* product);
	void ListAllProducts();
};

