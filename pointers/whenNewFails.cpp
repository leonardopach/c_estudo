#include <iostream>
#include <new>

int main() {
  // int *data = new int[100000000000000000];

  // for (size_t i{0}; i < 10; i++) {
  //   try {
  //     int *data = new int[10000000];
  //   } catch (const std::exception &ex) {
  //     std::cout << "Something went wrong : " << ex.what() << std::endl;
  //   }
  // }
  for (size_t i{0}; i < 10; i++) {
    int *data = new (std::nothrow) int[1000000000];

    if (data != nullptr) {
      std::cout << "Data allocated" << std::endl;
    } else {
      std::cout << "Data allocated failed" << std::endl;
    }
  }
  std::cout << "Programa ending well" << std::endl;

  return 0;
}
