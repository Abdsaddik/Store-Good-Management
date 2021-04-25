#pragma once

#include<vector>
#include"product.hpp"



class ProductVec {
private:
    int size;
    const char* name;
	double price;


public:
    ProductVec();
    ProductVec(const Product& pro);
    ProductVec(double price, const char* name);
    ProductVec(int size, double price, const char* name);
    std::vector<Product> proVec;
    // do sequential run for push_back()
    void fill(int size);
    // do sequential run for pop_back()
    void remove(int size = 1);
//    std::string name;
//    double price;
    // overload operator == for the class ProductVec
    friend bool operator==(const ProductVec & lhs, const ProductVec & rhs);
    // override << operator to make the code easier to read and use
    friend std::ostream& operator<<(std::ostream& o, const ProductVec& p);
};


