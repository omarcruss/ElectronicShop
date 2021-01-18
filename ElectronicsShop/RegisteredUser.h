#pragma once
#include "AbstractCustomer.h"
class RegisteredUser : public AbstractCustomer
{
private:
	int _paymentCardNum;
public:
	RegisteredUser();
	~RegisteredUser();
};

