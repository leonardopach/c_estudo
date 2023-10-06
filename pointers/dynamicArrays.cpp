

#include <cstddef>
#include <iostream>
#include <new>
int main() {

  size_t size{10};

  double *p_salaries{new double[size]}; // contains garbage values
  int *p_students{new (std::nothrow) int[size]{}};
  double *p_scores{new (std::nothrow) double[size]{1, 2, 3, 4, 5}};

  std::cout << p_salaries[0] << std::endl;
  std::cout << p_students[0] << std::endl;
  std::cout << p_scores[0] << std::endl;

  for (size_t i = 0; i < size; i++) {
    std::cout << p_salaries[i] << " ";
  }

  delete[] p_salaries;
  p_salaries = nullptr;
  delete[] p_scores;
  p_scores = nullptr;
  delete[] p_students;
  p_students = nullptr;

  std::cout << std::endl << std::endl;
  double *temperatures =
      new double[size]{10.0, 20, 30, 40, 50, 60, 70, 80, 90, 100};

  for (size_t i{0}; i < size; i++) {
    std::cout << "temperatures : " << temperatures[i] << std::endl;
  }

  return 0;
}
