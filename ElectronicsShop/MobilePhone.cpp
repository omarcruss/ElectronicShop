#include "MobilePhone.h"

MobilePhone::MobilePhone(string name, string manufactuer, int id, double price, string simOperator) : Product(name, manufactuer, id, price)
{
	this->_simOperator = simOperator;
}
