#include <iostream>


int main() {

    // Dynamic heap memory
    int* p_number{ nullptr };
    p_number = new int;

    *p_number = 77;
    std::cout << std::endl;
    std::cout << "Dynamically allocating memory : " << std::endl;
    std::cout << "p_number memory address : " << p_number << std::endl;
    std::cout << "*p_number : " << *p_number << std::endl;

    // returne pointer to OS
    delete p_number;
    p_number = nullptr;

    // Dynamic heap memory
    int* p_number1{ new int(22) };
    int* p_number2{ new int {34} };


    std::cout << std::endl;
    std::cout << "Initialize with valid memory address at declaration : " << std::endl;
    std::cout << "p_number1 : " << *p_number1 << std::endl;
    std::cout << "p_number2 : " << *p_number2 << std::endl;

    delete p_number1;
    delete p_number2;

    p_number1 = nullptr;
    p_number2 = nullptr;


    //reuse pointers
    p_number1 = new int{ 82 };
    std::cout << "p_number : " << *p_number1 << std::endl;
    std::cout << "p_number : " << p_number1 << std::endl;

    delete p_number1;
    p_number1 = nullptr;

    std::cout << "Ending...." << std::endl;

    return 0;
}