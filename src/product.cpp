#include "product.hpp"

Product::Product(double price, const char* name) : price{ price }, name{ name } {}

void Product::setName(const char* name) {
    this->name = name;
}
void Product::setPrice(double price) {
    this->price = price;
}

double Product::getPrice() const {
    return price;
}

const char* Product::getName() const {
    return name;
}
