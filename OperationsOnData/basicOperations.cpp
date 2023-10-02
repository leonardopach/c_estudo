#include <iostream>

int main()
{

    int number1{2};
    int number2{7};

    // addition
    int result = number1 + number2;
    std::cout << "Result : " << result << std::endl;

    // Subtraction
    result = number1 - number2;
    std::cout << "Result : " << result << std::endl;

    // Multiplicaiton
    result = number1 * number2;
    std::cout << "Result : " << result << std::endl;

    // Divion
    result = number2 / number1;
    std::cout << "Result : " << result << std::endl;

    // module
    result = number2 % number1;
    std::cout << "Result : " << result << std::endl;
    return 0;
}