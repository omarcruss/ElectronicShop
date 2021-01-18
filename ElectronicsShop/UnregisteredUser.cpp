#include "UnregisteredUser.h"

UnregisteredUser::UnregisteredUser(string name, string address, string email) : AbstractCustomer(name, address, email)
{
}

string UnregisteredUser::ToString()
{
	std::ostringstream result;
	result << "name: " << this->GetName() << ", " << "Address: " << this->GetAddress() << ", " << "email: " << this->GetEmail();
	return result.str();
}