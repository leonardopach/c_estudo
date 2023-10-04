#include <iostream>

int main() {

    const unsigned int COUNT{ 10 };

    size_t i{ 0 };

    while (i < COUNT) {
        std::cout << i << " => i am like c++ " << std::endl;
        i++;
    }

    return 0;
}