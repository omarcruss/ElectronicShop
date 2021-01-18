#include "Order.h"

Order::Order()
{
}

Order::~Order()
{
}

void Order::AddOrderItem(OrderItem* orderItem)														/*Product* product, int pieces*/
{
	this->_orderItems.push_back(orderItem);
}