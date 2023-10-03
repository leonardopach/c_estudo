#include <iostream>
#include <string>
using namespace std;

int FirstFactorial(int num)
{
    int fac = 1;
    for (int i = 1; i <= num; i++)
    {
        fac *= i;
        std::cout << " " << fac;
    }
    std::cout << std::endl;
    return fac;
}

int main(void)
{
    cout << FirstFactorial(4);
    return 0;
}