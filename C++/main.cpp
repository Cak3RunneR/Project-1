#include "Shop.h"
#include <iostream>

int main() {
    Shop shop;
    User user1("John Doe");
    Product apple("Apple", 0.99);
    Product milk("Milk", 2.49);

    Order order1;
    order1.addProduct(apple);
    order1.addProduct(milk);
    user1.addOrder(order1);
    shop.addUser(user1);

    std::cout << "Shop Users:\n";
    shop.displayUsers();

    return 0;
}