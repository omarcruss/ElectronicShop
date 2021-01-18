#include "Notebook.h"

Notebook::Notebook(string name, string manufactuer, int id, double price, string graphicCard) : Product(name, manufactuer, id, price)
{
	this->_graphicCard = graphicCard;
}
