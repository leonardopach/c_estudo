#include <iostream>

int main(int argc, char const *argv[])
{

  std::cout << "Hello World" << std::endl;

  std::cout << "The number is: " << 12 << std::endl;

  int age{21};
  std::cout << "The age is: " << age << std::endl;

  // Error
  std::cerr << "std::cerr output : Something went wrong" << std::endl;

  // log message
  std::clog << "std::clog output : This is a log message " << std::endl;
  return 0;
}
