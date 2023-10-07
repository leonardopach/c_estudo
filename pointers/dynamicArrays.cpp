

#include <cstddef>
#include <iostream>
#include <new>
int main() {

  size_t size{ 10 };

  double* p_salaries{ new double[size] }; // contains garbage values
  int* p_students{ new (std::nothrow) int[size] {} };
  double* p_scores{ new (std::nothrow) double[size] {1, 2, 3, 4, 5} };

  std::cout << p_salaries[0] << std::endl;
  std::cout << p_students[0] << std::endl;
  std::cout << p_scores[0] << std::endl;

  for (size_t i = 0; i < size; i++) {
    std::cout << p_scores[i] << " ";
  }

  delete[] p_salaries;
  delete[] p_scores;
  delete[] p_students;

  p_salaries = nullptr;
  p_scores = nullptr;
  p_students = nullptr;

  std::cout << std::endl << std::endl;
  double* temperatures =
    new double[size] {10.0, 20, 30, 40, 50, 60, 70, 80, 90, 100};

  for (size_t i{ 0 }; i < size; i++) {
    std::cout << "temperatures : " << temperatures[i] << std::endl;
  }

  delete[]temperatures;
  temperatures = nullptr;

  std::cout << std::endl;
  // static arrays vs dynamic arrays

  // dynamic array
  int scores[10]{ 1,2,3,4,5,6,7,8,9,10 }; // lives on the stack

  std::cout << "scores size : " << std::size(scores) << std::endl;

  for (auto score : scores) {
    std::cout << score << " ";
  }

  std::cout << std::endl;
  int* p_scores1 = new int [10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  // std::cout << "scores size : " << std::size(*p_scores1) << std::endl;
  for (auto i = 0; i < 10; i++) {
    std::cout << p_scores1[i] << " ";
  }

  return 0;
}
