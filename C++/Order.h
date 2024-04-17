#ifndef ORDER_H
#define ORDER_H

#include "Product.h"
#include <vector>

class Order {
private:
    std::vector<Product> products;

public:
    void addProduct(const Product& product) {
        products.push_back(product);
    }

    friend std::ostream& operator<<(std::ostream& os, const Order& order) {
        os << "Order Details:\n";
        for (const auto& product : order.products) {
            os << product << "\n";
        }
        return os;
    }
};

#endif