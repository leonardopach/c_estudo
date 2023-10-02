#include <iostream>

int main()
{

    bool red_light{false};
    bool green_light{false};

    if (red_light == true)
    {
        std::cout << "Stop!" << std::endl;
    }
    else
    {
        std::cout << "Go through!" << std::endl;
    }

    if (green_light)
    {
        std::cout << "The light is green!" << std::endl;
    }
    else
    {
        std::cout << "The light is Not green!" << std::endl;
    }

    std::cout << std::boolalpha;
    std::cout << "red_light : " << red_light << std::endl;
    std::cout << "green light : " << green_light << std::endl;
    return 0;
}