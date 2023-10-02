#include <iostream>

int main()
{

	signed int value1{10};
	unsigned int value2{300}; // can not put negative value

	std::cout << "Value1 : " << value1 << std::endl;
	std::cout << "Value2 : " << value2 << std::endl;
	std::cout << "sizeof(Value1) : " << sizeof(value1) << std::endl;
	std::cout << "sizeof(Value2) : " << sizeof(value2) << std::endl;

	short short_var{10};
	short int short_int{10};
	long long_var{10};
	std::cout << "sizeof(var) : " << sizeof(short_var) << std::endl;
	std::cout << "sizeof(short int) : " << sizeof(short_int) << std::endl;
	std::cout << "sizeof(long) : " << sizeof(long_var) << std::endl;

	return 0;
}