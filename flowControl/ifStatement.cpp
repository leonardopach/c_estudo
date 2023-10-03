#include <iostream>

int main()
{
    int number1{45};
    int number2{60};

    bool result = (number1 < number2);
    std::cout << std::boolalpha << "Result : " << result << std::endl;

    std::cout << std::endl;
    std::cout << "free standing if statement" << std::endl;

    if (result == true)
    {
        std::cout << number1 << " Is less than " << number2 << std::endl;
    };

    if (!(result == true))
    {
        std::cout << number1 << " is NOT less than " << number2 << std::endl;
    };

    std::cout << std::endl;
    std::cout << "Using the else clause" << std::endl;

    if (result == true)
    {
        std::cout << number1 << " is less than " << number2 << std::endl;
    }
    else
    {
        std::cout << number1 << " is NOT less than " << number2 << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Using expression as condition" << std::endl;

    if (number1 < number2)
    {
        std::cout << number1 << " is less than " << number2 << std::endl;
    }
    else
    {
        std::cout << number1 << " is NOT less than " << number2 << std::endl;
    }

    return 0;
}