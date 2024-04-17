#include <string>
#include <vector>

class User {
private:
    std::string name;
    std::vector<Order> orders;

public:
    User(const std::string& name_) : name(name_) {}

    void addOrder(const Order& order) {
        orders.push_back(order);
    }

    friend std::ostream& operator<<(std::ostream& os, const User& user) {
        os << "User: " << user.name << "\n";
        for (const auto& order : user.orders) {
            os << order << "\n";
        }
        return os;
    }
};