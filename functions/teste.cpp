#include <iostream>
#include <string>

int main() {

    std::string name;
    std::cout << "Enter your name: " << std::endl;
    std::getline(std::cin, name);

    std::cout << name << std::endl;
    return 0;
}