#include <iostream>

int main()
{
    std::string result{};
    int result2{};

    int valor1{20};
    int valor2{10};

    int value1{10};

    result2 = (valor1 < valor2) ? valor2 : valor1;

    result = (value1 < 10) ? "Value less than 10" : "Value greater than 10";

    std::cout << result << std::endl;
    std::cout << result2 << std::endl;
    return 0;
}