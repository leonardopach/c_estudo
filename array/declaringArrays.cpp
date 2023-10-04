#include <iostream>


int main() {

    int scores[5];
    scores[0] = 12;
    scores[4] = 34;

    std::cout << std::endl;
    std::cout << "Reading out score values (manually) : " << std::endl;
    std::cout << "scores[0] : " << scores[0] << std::endl;

    for (size_t i = 0; i < 5; i++) {
        std::cout << "scores [" << i << "] " << scores[i] << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Declare and initialize at the same time: " << std::endl;

    double salaries[5]{ 12.7, 7.5, 13.2, 8.1, 9.3 };
    for (size_t i{ 0 }; i < 5; i++) {
        std::cout << "scores [" << i << "] : " << salaries[i] << std::endl;
    }

    int class_size[]{ 10,12,15,11,18,17 };

    for (auto value : class_size) {
        std::cout << "value : " << value << std::endl;
    }
    return 0;
}
