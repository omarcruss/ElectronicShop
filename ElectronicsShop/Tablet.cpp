#include "Tablet.h"

Tablet::Tablet(string name, string manufactuer, int id, double price, double diagonal) : Product(name, manufactuer, id, price)
{
	this->_diagonal = diagonal;
}

double Tablet::GetDiagonal()
{
	return this->_diagonal;
}

string Tablet::ToString()
{
	std::ostringstream result;
	result << "ID: " << this->GetId() << ", " << "Manufacturer: " << this->GetManufactuer()<<", "<<this->GetDiagonal();
	return result.str();
}