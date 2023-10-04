#include <iostream>

int main(int argc, char const *argv[])
{
    for (unsigned int i{0}; i <= 10; i++)
    {
        std::cout << " " << i;
    }

    // Use size_t: a representation of some unsigned int for positeve numbers
    for (size_t i{0}; i < 10; i++)
    {
        std::cout << i << " => i am like c++" << std::endl;
    }

    std::cout << "sizeof(size_t) => " << sizeof(size_t) << std::endl;
    return 0;
}
