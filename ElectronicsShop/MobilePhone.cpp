#include "MobilePhone.h"

MobilePhone::MobilePhone(string name, string manufactuer, int id, double price, int memory, string simOperator) : Product(name, manufactuer, id, price)
{
	this->_simOperator = simOperator;
	this->_memory = memory;
}

string MobilePhone::GetSimOperator()
{
	return this->_simOperator;
}

int MobilePhone::GetMemory()
{
	return this->_memory;
}

string MobilePhone::ToString()
{
	std::ostringstream result;
	result << this->GetManufactuer() << " " << this->GetName() << "\n" << "ID: " << this->GetId() << "\n" << "Manufactuer: " << this->GetManufactuer() << "\n" << "Memory: " << this->GetMemory() << "GB" << "\n" << "SIM operator: "
		<< this->GetSimOperator() << "\n" << "Price: " << "$" << this->GetPrice();
	return result.str();
}