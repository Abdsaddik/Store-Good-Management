#include "exception.hpp"
#include "prostore.hpp"

using namespace std;

int main() {
    try {
        // declare product water
        ProductVec water;// (5, "test");
        
        // init water with it's init value, this adds one element to water
        water.proVec.push_back({ 1.5, "Pure Water" });
        // fill 10 elements to water
        water.fill(10);
        // remove 6 elements from water
        water.remove(6);
        // print details of the product water
        cout << water;
        // declare and define product milk and initialize it by initialising list
        ProductVec milk = { {2.5, "milk man"} };
        milk.fill(20);
        cout << milk;
        ProductVec juice{ {3.5, "fresh orange"} };
        juice.fill(30);

        ProductVec choco = {{2.0, "Chocolate"}};
        // declare product container store 
        proStore store;
        // insert products to store
        store.insert(water);
        // this item will not be added -> duplicated items can not be iserted
        store.insert(water);
        store.insert(milk);
        store.insert(juice);
        store.insert({3.3, "Pepsi"});
        cout << "**************************************************\n";
        // print a report of store contents
        cout << store;
        store.fill("Pepsi", 10);
        store.remove(milk);
        cout << "**************************************************\n";
        cout << store;
        cout << "**************************************************\n";
        
        // remove choco, notice that choco is not stored in store
        store.remove(choco);
        store.remove("Pepsi");
        cout << store;
    }
    catch (Exception& e) {
        e.what();
    }
    return 0;
}
