#pragma once
#include <iostream>
#include "AbstractStringOutput.h"
using namespace std;

class AbstractCustomer : public AbstractStringOutput
{
private:
	string _name;
	string _address;
	string _email;

public:
	AbstractCustomer(string name, string address, string email);
	~AbstractCustomer();
	string GetName();
	string GetAddress();
	string GetEmail();
	virtual string ToString() = 0;
};