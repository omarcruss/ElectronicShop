#include "Source.h"
#include "Product.h"
#include "Notebook.h"
#include "Order.h"
#include "OrderItem.h"
#include "MobilePhone.h"
#include "Catalog.h"
#include "Tablet.h"
#include "AbstractCustomer.h"
#include "CompanyUser.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	Notebook* notebook1 = new Notebook("VAIO", "Sony", 1, 500, "NVidia");
	Notebook* notebook2 = new Notebook("Pavilion", "HP", 002, 1000, "AMD");
	MobilePhone* mobile1 = new MobilePhone("iPhone 12 Pro", "Apple", 3, 1249, 512, "O2");
	Tablet* tablet1 = new Tablet("iPad", "Apple", 4, 100000, 10.0);
	
	Catalog* productCatalog = new Catalog();
	
	productCatalog->AddNewProduct(notebook1);
	productCatalog->AddNewProduct(notebook2);
	productCatalog->AddNewProduct(mobile1);
	productCatalog->AddNewProduct(tablet1);

	//productCatalog->ListAllProducts();
	
	CompanyUser* miro = new CompanyUser("Miroslav Murco", "G. Dusika 41", "miro@miro.sk", 234);
	Order* newOrder = new Order(miro);
	newOrder->AddOrderItem(notebook1, 4);
	newOrder->AddOrderItem(mobile1, 4);
	cout << newOrder->ToString() << endl;
	cout << newOrder->GetFinalPrice();
	//Order* newOrder = new Order();
	//OrderItem* newOrderItem1 = new OrderItem(notebook1, 1);
	//OrderItem* newOrderItem2 = new OrderItem(notebook2, 10);
	//
	//newOrder->AddOrderItem(newOrderItem1);
	//newOrder->AddOrderItem(newOrderItem2);
	//cout<<notebook1->GetId()<<"\n";
	//cout<<notebook2->GetId();
	
	return 0;
}