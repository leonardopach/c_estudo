#include <iostream>

int main()
{
    int number1{45};
    int number2{60};

    std::cout << "Number1 : " << number1 << std::endl;
    std::cout << "Number2 : " << number2 << std::endl;

    std::cout << std::endl;
    std::cout << "Comparing variables" << std::endl;

    std::cout << std::boolalpha;

    std::cout << "number1 < number2 : " << (number1 < number2) << std::endl;
    std::cout << "number1 <= number2 : " << (number1 <= number2) << std::endl;
    std::cout << "number1 > number2 : " << (number1 > number2) << std::endl;
    std::cout << "number1 >= number2 : " << (number1 >= number2) << std::endl;
    std::cout << "number1 == number2 : " << (number1 == number2) << std::endl;

    std::cout << "number1 != number2 : " << (number1 != number2) << std::endl;
    std::cout << "25 == 41 : " << (25 == 41) << std::endl;
    return 0;
}