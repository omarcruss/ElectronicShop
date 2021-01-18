#include "RegisteredUser.h"

int RegisteredUser::GetPaymentCardNum()
{
    return this->_paymentCardNum;
}

RegisteredUser::RegisteredUser(string name, string address, string email, int paymentCardNum) : AbstractCustomer(name, address, email)
{
	this->_paymentCardNum = paymentCardNum;
}

string RegisteredUser::ToString()
{
	std::ostringstream result;
	result << "name: " << this->GetName() << ", " << "Address: " << this->GetAddress() << ", " << "email: " << this->GetEmail() << ", " << "Payment card number: " << this->GetPaymentCardNum();
	return result.str();
}
