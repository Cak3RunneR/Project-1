Simple Shop System in C++
This project represents a simple shop system implemented in C++. It utilizes basic object-oriented programming concepts such as encapsulation, aggregation, and composition.

Project Structure
The project consists of the following classes:

Product: A class representing a product with properties such as "name" and "price".
Order: A class representing an order containing a vector of products.
User: A class representing a user with information about their name and orders.
Shop: A class representing a shop containing a list of users.
How to Use
Clone the repository to your computer.
Compile the project using a C++ compiler (e.g., g++ or Clang).
Run the compiled application.
You will see information about the user and their orders in the shop.

#include "Shop.h"
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
