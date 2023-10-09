#include <iostream>

double add(double a, double b);

struct Point {
  double m_x{23.2};
  double m_y{34.1};
};

int main() {
  Point p1;

  std::cout << "p1.x : " << p1.m_x << " , p1.y : " << p1.m_y << std::endl;
  double result = add(20, 10);

  std::cout << result << std::endl;
  return 0;
}

double add(double a, double b) { return a + b; }
