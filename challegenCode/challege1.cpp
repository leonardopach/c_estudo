#include <iostream>
using namespace std;

int FirstFactorial(int num)
{
    int fac = 1;
    for (int i = 1; i <= num; i++)
    {
        fac *= i;
    }
    return fac;
}

int main()
{
    cout << FirstFactorial(4);
    return 0;
}
