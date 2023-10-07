#include <iostream>


int main() {
    double double_value{ 12.34 };
    double& ref_double_value{ double_value };
    double* p_double_value{ &double_value };
    double other_double_value{ 16.2 };


    std::cout << "double_value : " << double_value << std::endl;
    std::cout << "ref_double_value : " << ref_double_value << std::endl;
    std::cout << "p_double_value : " << p_double_value << std::endl;
    std::cout << "*p_double_value : " << *p_double_value << std::endl;

    std::cout << std::endl;
    std::cout << "Writring through pointer  : " << std::endl;

    *p_double_value = 15.34;

    std::cout << "double_value : " << double_value << std::endl;
    std::cout << "ref_double_value : " << ref_double_value << std::endl;
    std::cout << "p_double_value : " << p_double_value << std::endl;
    std::cout << "*p_double_value : " << *p_double_value << std::endl;

    std::cout << std::endl;
    std::cout << "Writring through reference : " << std::endl;

    ref_double_value = 18.44;

    std::cout << "double_value : " << double_value << std::endl;
    std::cout << "ref_double_value : " << ref_double_value << std::endl;
    std::cout << "p_double_value : " << p_double_value << std::endl;
    std::cout << "*p_double_value : " << *p_double_value << std::endl;

    std::cout << std::endl;
    std::cout << "A pointer cam point somewhere else : " << std::endl;

    p_double_value = &other_double_value;

    std::cout << "double_value : " << double_value << std::endl;
    std::cout << "ref_double_value : " << ref_double_value << std::endl;
    std::cout << "p_double_value : " << p_double_value << std::endl;
    std::cout << "*p_double_value : " << *p_double_value << std::endl;
    std::cout << "other_double_value : " << other_double_value << std::endl;
    std::cout << "other_double_value : " << &other_double_value << std::endl;

    return 0;
}