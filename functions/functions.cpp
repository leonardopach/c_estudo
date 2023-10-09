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

void enter_bar(size_t age) {
  if (age >= 18) {
    std::cout << "You're " << age << " years old. Please proceed." << std::endl;
  } else {
    std::cout << "Sorry, you're too young for this. No offense!" << std::endl;
  }
}

double increment_multiply(double a, double b) {

  std::cout << "Inside function , before increment : " << std::endl;
  std::cout << "a : " << a << std::endl;
  std::cout << "b : " << b << std::endl;

  double result = ((++a) * (++b));

  std::cout << "Inside function, after increment : " << std::endl;
  std::cout << "a : " << a << std::endl;
  std::cout << "b : " << b << std::endl;

  return result;
}

int main() {
  say_hello();

  int a{34};
  int b{223};

  int maximum_number(max(a, b));

  std::cout << std::endl;
  enter_bar(18);
  for (size_t i{16}; i < 20; i++) {
    enter_bar(i);
  }

  std::cout << std::endl;
  std::cout << maximum_number << std::endl;
  std::cout << std::endl;

  increment_multiply(10, 24);
  return 0;
}
