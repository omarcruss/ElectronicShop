#pragma once
#include "Product.h"
#include "OrderItem.h"
#include "AbstractCustomer.h"
#include <list>
#include <sstream>
#include <iostream>

class Order
{
private:
	list <OrderItem*> _orderItems;
	AbstractCustomer* _customer;
public:
	Order(AbstractCustomer* customer);
	~Order();

	void AddOrderItem(OrderItem* orderItem);
	void AddOrderItem(Product* product, int pieces);
	virtual string ToString();
	virtual int GetFinalPrice();
};

