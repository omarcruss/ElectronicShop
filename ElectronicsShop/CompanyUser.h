#pragma once
#include "AbstractCustomer.h"

class CompanyUser : public AbstractCustomer
{
private:
	int _vat;
public:
	CompanyUser(string name, string address, string email, int vatNum);
	~CompanyUser();
};

