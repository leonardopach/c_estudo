#include <iostream>


int main() {
    int int_value{ 45 };
    double double_value{ 33.65 };

    int& refence_to_int_value_1{ int_value };
    int& refence_to_int_value_2 = int_value;
    double& refence_to_double_value_1 = double_value;
    int value1 = refence_to_int_value_1;

    std::cout << "int_value : " << &int_value << std::endl;
    std::cout << "double_value : " << double_value << std::endl;
    std::cout << "reference_to_int_value_1 : " << &refence_to_int_value_1 << std::endl;
    std::cout << "reference_to_int_value_2 : " << refence_to_int_value_2 << std::endl;
    std::cout << "reference_to_double_value_1 : " << refence_to_double_value_1 << std::endl;

    // references
    std::cout << std::endl;
    refence_to_int_value_1 = 55;
    std::cout << "references different : " << &value1 << std::endl;
    std::cout << "int_value : " << &int_value << std::endl;
    std::cout << "reference_to_int_value_1 : " << &refence_to_int_value_1 << std::endl;

    return 0;
}