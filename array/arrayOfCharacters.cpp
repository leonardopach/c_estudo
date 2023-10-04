#include <iostream>

int main() {
    char message[6]{ 'H', 'e', 'l' , 'l', 'o' };
    char message1[]{ "Hello" };
    
    std::cout << "message : " << message1 << std::endl;

    std::cout << "Message : ";
    for (auto c : message) {
        std::cout << c;
    }

    std::cout << std::endl;
    std::cout << "size : " << std::size(message) << std::endl;

    std::cout << "Modify array data: " << std::endl;
    message[1] = 'a';

    for (auto c : message) {
        std::cout << c;
    }
    return 0;
}
