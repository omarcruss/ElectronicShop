#include "CompanyUser.h"

CompanyUser::CompanyUser(string name, string address, string email, int vat) : AbstractCustomer(name, address, email)
{
	this->_vat = vat;
}

string CompanyUser::ToString()
{
	std::ostringstream result;
	result << "Name:  " << this->GetName() << "\n" << "Address: " << this->GetAddress() << "\n" << "Email: " << this->GetEmail() << "\n" << "VAT: " << this->GetVat() << endl;
	return result.str();
}

int CompanyUser::GetVat()
{
	return this->_vat;
}
