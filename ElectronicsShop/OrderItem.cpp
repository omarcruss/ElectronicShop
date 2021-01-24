#include "OrderItem.h"

OrderItem::OrderItem(Product* product, int pieces)
{
    this->_product = product;
    this->_pieces = pieces;
}

OrderItem::~OrderItem()
{
}

int OrderItem::GetPieces()
{
    return this->_pieces;
}

int OrderItem::GetTotalPrice()
{
	return this->_product->GetPrice() * this->GetPieces();
}

string OrderItem::ToString()
{
	std::ostringstream result;
	result << "Product: " << this->_product->ToString() << "\n" << "Pieces: " << this->_pieces << "\n" << "Total price: " << "$" << this->GetTotalPrice() << endl;
	return result.str();
}