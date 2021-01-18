#include "Catalog.h"


Catalog::Catalog()
{
}

Catalog::~Catalog()
{
}

void Catalog::AddNewProduct(Product* product)
{
	this->_products.push_back(product);
}

Product* Catalog::GetAllProducts()
{
	
}
