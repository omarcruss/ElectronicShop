#pragma once
#include <iostream>
using namespace std;

class AbstractCustomer
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
};

