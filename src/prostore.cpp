#include <iostream>
#include"prostore.hpp"


proStore::proStore() = default;

proStore::proStore(const ProductVec & pv) {
    store.push_back(pv);
}

bool proStore::insert(const ProductVec & pv) {
	for(auto& it:store){ if(it.proVec[0].getName() == pv.proVec[0].getName()) return false; }
    store.push_back(pv);
    return true;
}

void proStore::fill(const char* name, int size){
	for(auto& it:store){
		if(it.proVec[0].getName() == name){
			it.fill(size);
		}
	}
}

bool proStore::remove(const ProductVec & pv) {
    for (auto& it : store) {
        if (it == pv) {
            store.erase(store.begin() + (&it - &store[0]));
            return true;
        }
    }
    return false;
}

bool proStore::remove(const char* name) {
    for (auto& it : store) {
        if (it.proVec[0].getName() == name) {
            store.erase(store.begin() + (&it - &store[0]));
            return true;
        }
    }
    return false;
}

std::ostream& operator<<(std::ostream& out, const proStore& p){
	for (auto& it : p.store) {
		out << &it - &p.store[0] + 1 << ": ";
		out << it;
	}
	return out;
}
