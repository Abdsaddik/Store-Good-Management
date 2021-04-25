#pragma once

#include "productvec.hpp"

//product container
class proStore {
private:
    // @store: is a vector of vector which can include different product types (vectors)
    std::vector<ProductVec> store = {};

public:
    proStore();
    // @ ProductVect: is a product vector that can the store can be initialized with,
    //other products(vectors) can be pushed later by insert() method
    proStore(const ProductVec& pv);
    // add a prduct vector to the store
    bool insert(const ProductVec& pv);
    // remove all elements of a specific product from the store
    // if the product was found and removed -> return true
    // if the product was not found -> return false
    bool remove(const ProductVec& pv);
    bool remove(const char* name);
    void fill(const char* name, int size);
    friend std::ostream& operator<<(std::ostream& out, const proStore& p);
};
