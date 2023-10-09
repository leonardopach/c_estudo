#include <cctype>
#include <iostream>
int main() {

  std::cout << std::endl;
  std::cout << std::boolalpha;
  std::cout << "std::isalnum " << std::endl;

  std::cout << "C is alphanumeric : " << std::isalnum('C') << std::endl;
  std::cout << "^ is alphanumeric : " << std::isalnum('^') << std::endl;

  char input_char{'A'};
  if (std::isalnum(input_char)) {
    std::cout << input_char << " is alphanumeric." << std::endl;
  } else {
    std::cout << input_char << " is not alphanumeric." << std::endl;
  }

  std::cout << std::endl;
  std::cout << "std::isblank : " << std::endl;
  char message[]{"hello there; How are you doing? The sun is shining"};
  std::cout << "message : " << message << std::endl;

  size_t blank_cout{};
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

  std::cout << std::endl;
  std::cout << "std::isapha" << std::endl;
  std::cout << "C is alphabetic : " << std::isalpha('e') << std::endl;
  std::cout << "^ is alphabetic : " << std::isalpha('^') << std::endl;
  std::cout << "7 is alphabetic : " << std::isalpha('7') << std::endl;

  if (std::isalpha('e')) {
    std::cout << 'e' << " is alphabetic" << std::endl;
  } else {
    std::cout << 'e' << " is NOT alphabetic" << std::endl;
  }
  std::cout << std::endl;
  std::cout << "std::isdigit : " << std::endl;
  char statament[]{
      "Mr Hamilton owns 221 cows. That's a lot of cows! The kids exclamed."};
  std::cout << "statament : " << statament << std::endl;

  size_t digit_cout{};

  for (auto character : statament) {
    if (std::isdigit(character)) {
      std::cout << "Found digit : " << character << std::endl;
      ++digit_cout;
    }
  }

  std::cout << "Found " << digit_cout << " digits in the statement string"
            << std::endl;
  return 0;
}
