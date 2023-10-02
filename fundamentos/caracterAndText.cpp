#include <iostream>

int main()
{

    char value = 65;

    std::cout << "Value " << value << std::endl;
    std::cout << "Value(int) " << static_cast<int>(value) << std::endl;
    return 0;
}