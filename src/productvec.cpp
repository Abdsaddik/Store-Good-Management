#include <iomanip>
#include"productvec.hpp"
#include"exception.hpp"
#include <iostream>



ProductVec::ProductVec() = default;

ProductVec::ProductVec(double price, const char* name) : price{price}, name{name} {
    proVec.push_back({ price, name });
}

ProductVec::ProductVec(const Product & pro) : proVec{ pro }, price{pro.getPrice()} ,name{pro.getName()}
{

}

ProductVec::ProductVec(int size, double price, const char* name)
    : size{ size }
{
    if (size < 1) throw Exception("Exception: invalid size!");
    for (int cnt = 0; cnt < size; cnt++) proVec.push_back({ price, name });
}


void ProductVec::fill(int size) {
    if (proVec.empty()) throw Exception("Exception: Product type and price are not provided!\n"
        "please insert at least one element to this vector product");
    for (int cnt = 0; cnt < size; cnt++) proVec.push_back({ proVec[0].getPrice(), proVec[0].getName() });
}

void ProductVec::remove(int size) {
    if (proVec.size() < size) throw Exception("Exception: please check the number of elements for this product!");
    for (int cnt = 0; cnt < size; cnt++) proVec.pop_back();
}

bool operator==(const ProductVec & lhs, const ProductVec & rhs) {
    return (lhs.name == rhs.name) && (lhs.price == rhs.price);
}

std::ostream& operator<<(std::ostream& o, const ProductVec& p){
	if (p.proVec.empty()) return o << "Warning: there are no elements of this product to print!\n";
	o << "Product: " << p.proVec[0].getName() << std::endl;
	o << "Elements: " << p.proVec.size() << std::endl;
	o << std::fixed << std::setprecision(2) << "Price: " << p.proVec[0].getPrice() << " Euro\n";
	return o;
}
