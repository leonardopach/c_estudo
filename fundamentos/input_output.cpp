#include <iostream>

int main() {

  int age;
  std::string name;

  std::cout << "Please type in tour full name: " << std::endl;
  std::getline(std::cin, name);

  std::cout << "Please type in your age : " << std::endl;

  std::cin >> age;

  // Here, take both the name and age at the same time
  // std::cout << "Please type in your name and age: " << std::endl;
  // std::cin >> name >> age;

  std::cout << "Hello " << name << "! You are " << age << " Year old"
            << std::endl;

  return 0;
}
