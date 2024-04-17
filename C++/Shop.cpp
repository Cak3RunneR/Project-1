#include <vector>

class Shop {
private:
    std::vector<User> users;

public:
    void addUser(const User& user) {
        users.push_back(user);
    }

    void displayUsers() const {
        for (const auto& user : users) {
            std::cout << user << std::endl;
        }
    }
};