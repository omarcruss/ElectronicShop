#include "Product.h"

Product::Product(string name, string manufactuer, int id, double price)
{
    this->_name = name;
    this->_manufactuer = manufactuer;
    this->_id = id;
    this->_price = price;
}

Product::~Product()
{
}

string Product::GetName()
{
    return this->_name;
}

string Product::GetManufactuer()
{
    return this->_manufactuer;
}

int Product::GetId()
{
    return this->_id;
}

double Product::GetPrice()
{
    return this->_price;
}