#include "AbstractCustomer.h"

AbstractCustomer::AbstractCustomer(string name, string address, string email)
{
    this->_name = name;
    this->_address = address;
    this->_email = email;
}

AbstractCustomer::~AbstractCustomer()
{
}

string AbstractCustomer::GetName()
{
    return this->_name;
}

string AbstractCustomer::GetAddress()
{
    return this->_address;
}

string AbstractCustomer::GetEmail()
{
   return this->_email;
}