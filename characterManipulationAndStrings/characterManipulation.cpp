

#include <cctype>
#include <ios>
#include <iostream>
#include <ostream>
int main() {

  std::cout << std::endl;
  std::cout << std::boolalpha;
  std::cout << "std::isalnum " << std::endl;

  std::cout << "C is alphanumeric : " << std::isalnum('C') << std::endl;
  std::cout << "^ is alphanumeric : " << std::isalnum('C') << std::endl;

  char input_char{'*'};
  if (std::isalnum(input_char)) {
    std::cout << input_char << " is alphanumeric." << std::endl;
  } else {
    std::cout << input_char << " is not alphanumeric." << std::endl;
  }

  std::cout << std::endl;
  std::cout << "std::isblank : " << std::endl;
  char message[]{"hello there; How are you doing? The sun is shining"};
  std::cout << "message : " << message << std::endl;

  int blank_cout{};
  for (size_t i{0}; i < std::size(message); i++) {
    if (std::isblank(message[i])) {
      std::cout << "Found a blank character at index : [" << i << "]"
                << std::endl;
      ++blank_cout;
    }
  }

  std::cout << "int total we found " << blank_cout << " blank character."
            << std::endl;

  std::cout << std::endl;

  std::cout << "std::islower and std::isupper : " << std::endl;

  std::cout << std::endl;
  char thought[]{
      "The C++ Programing Language is one the most used on the Planet"};
  int lowercase_count{};
  int upercase_count{};

  for (auto character : thought) {
    if (std::islower(character)) {
      std::cout << " " << character;
      ++lowercase_count;
    }
    if (std::isupper(character)) {
      std::cout << " " << character;
      ++upercase_count;
    }
  }

  std::cout << std::endl;
  std::cout << "Found " << lowercase_count << " lowercase character and "
            << upercase_count << " upercase character" << std::endl;
  return 0;
}
