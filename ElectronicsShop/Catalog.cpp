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

void Catalog::ListAllProducts()
{
	for (list<Product*>::iterator i = this->_products.begin(); i != this->_products.end(); ++i)
	{
		/*Product* p = *i;
		AbstractStringOutput* a = (AbstractStringOutput*)p;
		cout << a->ToString() << endl;*/
		cout << ((AbstractStringOutput*)*i)->ToString() << endl;
	}
	cout << endl;
}