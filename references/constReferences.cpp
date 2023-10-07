#include <iostream>

int main() {
  std::cout << std::endl;
  std::cout << "Cost references : " << std::endl;
  int age = 30;
  const int &const_ref_age{age};

  std::cout << "Age : " << age << std::endl;
  std::cout << "const_ref_age : " << const_ref_age << std::endl;

  std::cout << "const_ref_age : " << const_ref_age << std::endl;
  return 0;
}
