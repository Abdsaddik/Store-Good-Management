#pragma once

#include<string>

class Product {
private:
    double price;
    const char* name;

public:
    Product(double price, const char* name);
    void setName(const char*name);
    void setPrice(double price);
    const char* getName() const;
    double getPrice() const;

};
