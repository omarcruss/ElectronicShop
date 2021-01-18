#pragma once
#include "AbstractCustomer.h"
class UnregisteredUser : public AbstractCustomer
{

public:
	UnregisteredUser(string name, string address, string email);
	~UnregisteredUser();
};