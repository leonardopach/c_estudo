#include <iostream>

int addNumbers(int first_param, int second_param)
{
    int result = first_param + second_param;

    return result;
}

int main()
{

    int first_number{3};
    int secondo_number{7};

    std::cout << "First number: " << first_number << std::endl;
    std::cout << "Secondo number: " << secondo_number << std::endl;

    int sum = first_number + secondo_number;
    std::cout << "Sum: " << sum << std::endl;

    sum = addNumbers(25, 7);
    std::cout << sum << std::endl;

    std::cout << addNumbers(30, 5) << std::endl;
    return 0;
}