#include <iostream>

int main()
{
    bool a{true};
    bool b(false);
    bool c{true};

    std::cout << std::endl;
    std::cout << std::boolalpha;
    std::cout << "Basic AND operations" << std::endl;

    std::cout << "a && b : " << (a && b) << std::endl;
    std::cout << "a && b : " << (a && c) << std::endl;
    std::cout << "a && b && c : " << (a && b && c) << std::endl;

    std::cout << std::endl;
    std::cout << "Basic OR operations" << std::endl;

    std::cout << "a || b : " << (a || b) << std::endl;
    std::cout << "a || b : " << (a || c) << std::endl;
    std::cout << "a || b || c : " << (a || b || c) << std::endl;

    return 0;
}