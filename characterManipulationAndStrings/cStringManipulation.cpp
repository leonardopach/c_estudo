

#include <cstring>
#include <iostream>
int main() {

  const char message1[]{"The sky is blue"};

  const char *message2{"The sky is blue"};
  std::cout << "message1 : " << message1 << std::endl;

  // strlen ignores null character
  std::cout << "strlen(message1) : " << std::strlen(message1) << std::endl;

  // includes the null character
  std::cout << "sizeof(message1) : " << sizeof(message1) << std::endl;

  // strlen still works with decayed arrays
  std::cout << "strlen(message2) : " << std::strlen(message2) << std::endl;

  // prints size of pointer
  std::cout << "sizeof(message2) : " << sizeof(message2) << std::endl;
  return 0;
}
