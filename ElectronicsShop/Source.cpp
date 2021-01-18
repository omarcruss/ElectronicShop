#include "Source.h"
#include "Product.h"
#include "Notebook.h"
#include "Order.h"
#include "OrderItem.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	Product* notebook1 = new Product("VAIO", "Sony", 2020, 500);
	Product* notebook2 = new Product("miro", "nika", 2542, 152);
	Order* newOrder = new Order();
	OrderItem* newOrderItem1 = new OrderItem(notebook1, 1);
	OrderItem* newOrderItem2 = new OrderItem(notebook2, 10);
	
	newOrder->AddOrderItem(newOrderItem1);
	newOrder->AddOrderItem(newOrderItem2);
	cout<<notebook1->GetId()<<"\n";
	cout<<notebook2->GetId();
	return 0;
}