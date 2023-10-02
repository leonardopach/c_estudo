#include <iostream>

int main()
{

    int value = 5;

    std::cout << "The valeu is : " << value++ << std::endl;
    std::cout << "The valeu is : " << value << std::endl;

    value = 5;
    std::cout << "The valeu is : " << --value << std::endl;
    std::cout << "The valeu is : " << --value << std::endl;
    return 0;
}