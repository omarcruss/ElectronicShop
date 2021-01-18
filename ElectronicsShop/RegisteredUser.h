#pragma once
#include "AbstractCustomer.h"
#include "AbstractStringOutput.h"
#include <iostream>
#include <sstream>

class RegisteredUser : public AbstractCustomer
{
private:
	int _paymentCardNum;
public:
	RegisteredUser(string name, string address, string email, int paymentCardNum);
	virtual string ToString();
	int GetPaymentCardNum();
};

