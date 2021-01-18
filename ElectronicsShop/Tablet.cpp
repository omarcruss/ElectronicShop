#include "Tablet.h"

Tablet::Tablet(string name, string manufactuer, int id, double price, double diagonal) :Product(name, manufactuer, id, price)
{
	this->_diagonal = diagonal;
}