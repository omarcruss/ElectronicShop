#pragma once
#include "Product.h"
#include <iostream>
#include <sstream>

class Notebook : public Product
{
private:
	string _graphicCard;
public:
	Notebook(string name, string manufactuer, int id, double price, string graphicCard);
	virtual string ToString();
	string GetGraphicCard();
};