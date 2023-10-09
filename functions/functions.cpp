#include <iostream>
void say_hello() {
  std::cout << "Hello world" << std::endl;
  return;
}

int max(int a, int b) {
  if (a > b) {
    return a;
  } else {
    return b;
  }
}

int main() {
  say_hello();

  int a{34};
  int b{223};

  int maximum_number(max(a, b));

  std::cout << maximum_number << std::endl;
  return 0;
}
