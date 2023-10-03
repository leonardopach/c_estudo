#include <iostream>

const int Pen{10};
const int Marker{20};

int main()
{

    int tool{Pen};

    switch (tool)
    {
    case Pen:
    {
        std::cout << "Active tool is pen" << std::endl;
    }
    break;
    case Marker:
    {
        std::cout << "Active tool is marker" << std::endl;
    }
    break;
    default:
    {
        std::cout << "Can't match any tool" << std::endl;
    }
    }

    return 0;
}