#include <iostream>

int main()
{

    auto var1{1};
    auto var2{13.6};
    auto var3{14.0f};
    auto var4{15.0l};
    auto var5{'e'};

    std::cout << "Value1 : " << var1 << std::endl;
    std::cout << "Value2 : " << var2 << std::endl;

    return 0;
}