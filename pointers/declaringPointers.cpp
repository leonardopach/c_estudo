#include <iostream>

int main() {
  int p_number{10};
  int *p_fractional_number{&p_number};

  *p_fractional_number = 20;
  std::cout << p_number << " ---- " << p_fractional_number << std::endl;

  int *p_number1{nullptr};
  int *p_fractional_number1{nullptr};

  std::cout << "sizeof(int)" << sizeof(int) << std::endl;
  std::cout << "sizeof(double)" << sizeof(double) << std::endl;
  std::cout << "sizeof(double*)" << sizeof(double *) << std::endl;
  std::cout << "sizeof(int*)" << sizeof(int *) << std::endl;
  std::cout << "sizeof(p_number1)" << sizeof(p_number1) << std::endl;
  std::cout << "sizeof(p_fractional_number1)" << sizeof(p_fractional_number1)
            << std::endl;

  int int_var{43};
  int *p_int{&int_var};

  std::cout << std::endl;
  std::cout << "Int var : " << int_var << std::endl;
  std::cout << "p_int (Address in memory) : " << p_int << std::endl;

  int int_var1{65};
  p_int = &int_var1;
  std::cout << "p_int (with different Address in memory) : " << p_int
            << std::endl;

  // deferencing a pointer :

  int *p_int2{nullptr};
  int int_data{56};
  p_int2 = &int_data;

  std::cout << "value : " << *p_int2 << std::endl;
  return 0;
}
