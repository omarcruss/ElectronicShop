#include "Order.h"

Order::Order(AbstractCustomer* customer) 
{
	this->_customer = customer;
}

Order::~Order()
{
}

void Order::AddOrderItem(OrderItem* orderItem)
{
	this->_orderItems.push_back(orderItem);
}

void Order::AddOrderItem(Product* product, int pieces) //wrapper method
{
	OrderItem* newOrderItem = new OrderItem(product, pieces);
	this->AddOrderItem(newOrderItem);
}



string Order::ToString()
{
	std::ostringstream result;
	result << "Customer: " << "\n"<< this->_customer->ToString() << endl;
	for (list<OrderItem*>::iterator i = this->_orderItems.begin(); i != this->_orderItems.end(); ++i)
	{
		result << "Ordered item: " <<"\n"<< (*i)->ToString() <<endl;
	}
	return result.str();
}

int Order::GetFinalPrice()
{
	int finalPrice = 0;
	int tempPrice = 0;
	cout << "Final price to pay: $";
	for (list<OrderItem*>::iterator i = this->_orderItems.begin(); i != this->_orderItems.end(); ++i)
	{
		tempPrice += (*i)->GetTotalPrice();
	}
	finalPrice += tempPrice;
	return finalPrice;
}
