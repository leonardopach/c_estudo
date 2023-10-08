#include <iostream>

int main() {
  std::cout << "std::tolwer and std::toupper " << std::endl;
  char original_str[]{"Home. The feeling of belonging"};
  char dest_str[std::size(original_str)];

  for (size_t i{}; i < std::size(original_str); i++) {
    dest_str[i] = std::toupper(original_str[i]);
  }

  std::cout << "original String : " << original_str << std::endl;
  std::cout << "Uppercase string : " << dest_str << std::endl;

  std::cout << std::endl;

  for (size_t i{}; i < std::size(original_str); i++) {
    dest_str[i] = std::tolower(original_str[i]);
  }

  std::cout << "original String : " << original_str << std::endl;
  std::cout << "lowercase string : " << dest_str << std::endl;
  return 0;
}
