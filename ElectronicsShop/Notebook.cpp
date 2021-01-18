#include "Notebook.h"

Notebook::Notebook(string name, string manufactuer, int id, double price, string graphicCard) : Product(name, manufactuer, id, price)
{
	this->_graphicCard = graphicCard;
}

string Notebook::ToString()
{
	std::ostringstream result;
	result << this->GetManufactuer() << " " << this->GetName() << "\n" << "ID: " << this->GetId() << "\n" << "Manufactuer: " << this->GetManufactuer() << "\n" << "Graphic card: " << this->GetGraphicCard()<< "\n" << "Price: " << "$" << this->GetPrice();
	return result.str();
}

string Notebook::GetGraphicCard()
{
	return this->_graphicCard;
}
