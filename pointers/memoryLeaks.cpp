

#include <iostream>
int main() {
  int *p_number{new int{67}};

  // should clear the memory here
  delete p_number;
  p_number = nullptr;

  int number{55};

  p_number = &number;

  std::cout << "Program ending well" << std::endl;
  return 0;
}
