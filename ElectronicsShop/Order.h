#pragma once
#include "Product.h"
#include "OrderItem.h"
#include <list>
class Order
{
private:
	list <OrderItem*> _orderItems;
public:
	Order();
	~Order();
	void AddOrderItem(OrderItem* orderItem);			/*Product* product, int pieces*/
};

