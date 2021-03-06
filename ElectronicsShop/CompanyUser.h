#pragma once
#include "AbstractCustomer.h"
#include "AbstractStringOutput.h"
#include <iostream>
#include <sstream>

class CompanyUser : public AbstractCustomer
{
private:
	int _vat;
public:
	CompanyUser(string name, string address, string email, int vatNum);
	virtual string ToString();
	int GetVat();
};

