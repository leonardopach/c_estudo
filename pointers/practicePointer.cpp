#include <iostream>


int main() {


    int value1{ 10 };
    int* value{ &value1 };

    std::cout << value << std::endl;

    const char* p_message{ "Hello world" };
    // *p_message = "teste"; Error'

    std::cout << "The message is : " << p_message << std::endl;
    std::cout << "The value stored at p_message is : " << *p_message << std::endl;

    //allow user to modify the string
    char message1[]{ "Hello world!" };
    message1[0] = 'B';

    std::cout << "message1 : " << message1 << std::endl;

    // lifetime variable
    {
        int local_score_var{ 65 };
        std::cout << "inside : " << local_score_var << std::endl;
    }
    // outside of scope
    // std::cout << "outside : " << local_score_var << std::endl;
    {
        int* local_score_var{ nullptr };
        local_score_var = new int;
        int value{ 55 };
        local_score_var = &value;
        std::cout << "inside : " << *local_score_var << std::endl;
    }
    // std::cout << "outside : " << *local_score_var << std::endl;

    return 0;
}
