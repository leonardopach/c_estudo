# include<iostream>


int main() {

    int* p_number{ new int{23} };


    std::cout << std::endl;
    std::cout << "Case 1 : uninitialized pointer : " << std::endl;
    std::cout << "p_number : " << p_number << std::endl;
    std::cout << "*p_number : " << *p_number << std::endl; // crash

    std::cout << "Program is ending well : " << std::endl;

    delete p_number;
    p_number = nullptr;

    std::cout << std::endl;
    std::cout << "Case 2 : Deleted pointer" << std::endl;
    int* p_number1{ new int{67} };

    std::cout << "*p_number1 (before delete) " << *p_number1 << std::endl;

    delete p_number1;
    p_number1 = nullptr;

    int* p_number2{ new int{83} };
    int* p_number3{ p_number2 };

    std::cout << "p_number2 : " << p_number2 << " - " << *p_number2 << std::endl;
    std::cout << "p_number3 : " << p_number3 << " - " << *p_number3 << std::endl;

    delete p_number2;
    p_number2 = nullptr;

    std::cout << std::endl;
    p_number3 = new int{ 23 };
    std::cout << "p_number3 : " << p_number3 << " - " << *p_number3 << std::endl;

    // delete p_number3;
    // p_number3 = nullptr;

    int* p_number4{ nullptr };
    int* p_number5{ new int{34} };

    if (p_number5 != nullptr) {
        std::cout << "*p_number5 : " << *p_number5 << std::endl;
    } else {
        std::cout << "Invalid address" << std::endl;

    }
    return 0;
}