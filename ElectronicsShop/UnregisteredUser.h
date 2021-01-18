#pragma once
#include "AbstractCustomer.h"
#include "AbstractStringOutput.h"
#include <iostream>
#include <sstream>

class UnregisteredUser : public AbstractCustomer
{

public:
	UnregisteredUser(string name, string address, string email);
	virtual string ToString();
};