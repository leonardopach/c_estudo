// Function declaration
#include <iostream>

int max(int, int);
int min(int, int);
int inc_mult(int, int);

int main() {

  int a{3};
  int b{4};

  std::cout << "max (" << a << "," << b << ") : " << max(a, b) << std::endl;
  std::cout << "min (" << a << "," << b << ") : " << min(a, b) << std::endl;
  std::cout << "inc_mult : " << inc_mult(a, b) << std::endl;

  return 0;
}

int min(int a, int b) {
  if (a < b) {
    return a;
  } else {
    return b;
  }
}

int max(int a, int b) {
  if (a > b) {
    return a;
  } else {
    return b;
  }
}

int inc_mult(int a, int b) { return (a * b); }
