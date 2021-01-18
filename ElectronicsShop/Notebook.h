#pragma once
#include "Product.h"
class Notebook : public Product
{
private:
	string _graphicCard;
public:
	Notebook(string name, string manufactuer, int id, double price, string graphicCard);
	~Notebook();
};