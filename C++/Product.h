#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include <iostream>

class Product {
private:
    std::string name;
    double price;

public:
    Product(const std::string& name_, double price_) : name(name_), price(price_) {}
    
    const std::string& getName() const { return name; }
    double getPrice() const { return price; }

    friend std::ostream& operator<<(std::ostream& os, const Product& product) {
        os << "Product: " << product.name << ", Price: $" << product.price;
        return os;
    }
};

#endif