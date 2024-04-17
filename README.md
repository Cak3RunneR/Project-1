<h1>Simple Shop System in C++</h1>

<p>This project represents a simple shop system implemented in C++. It utilizes basic object-oriented programming concepts such as encapsulation, aggregation, and composition.</p>

<h2>Project Structure</h2>

<p>The project consists of the following classes:</p>

<ul>
  <li><strong>Product</strong>: A class representing a product with properties such as "name" and "price".</li>
  <li><strong>Order</strong>: A class representing an order containing a vector of products.</li>
  <li><strong>User</strong>: A class representing a user with information about their name and orders.</li>
  <li><strong>Shop</strong>: A class representing a shop containing a list of users.</li>
</ul>

<h2>How to Use</h2>

<ol>
  <li>Clone the repository to your computer.</li>
  <li>Compile the project using a C++ compiler (e.g., g++ or Clang).</li>
  <li>Run the compiled application.</li>
  <li>You will see information about the user and their orders in the shop.</li>
</ol>

<h2>Example Usage</h2>

<pre><code>#include "Shop.h"

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

    std::cout &lt;&lt; "Shop Users:\n";
    shop.displayUsers();

    return 0;
}
</code></pre>
