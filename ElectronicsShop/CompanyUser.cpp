#include "CompanyUser.h"

CompanyUser::CompanyUser(string name, string address, string email, int vat) : AbstractCustomer(name, address, email)
{
	this->_vat = vat;
}
