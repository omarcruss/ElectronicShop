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

