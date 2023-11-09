#include <cmath>
#include <iostream>

const double G = 9.8;

struct Problem {
  double a;
  double v;
  double h;

  double calculate_time() { return std::sqrt(2 * h / (a + G)); }
  double calculate_dy(double t) { return h - (0.5 * a * t + v) * t; }
};

int main() {
  Problem p = {};
  p.a = 1.2;
  p.v = 2.4;
  p.h = 2.7;

  auto t = p.calculate_time();
  std::cout << "Time took for screw to fall: " << t << std::endl;

  auto dy = p.calculate_dy(t);
  std::cout << "Distance traveled by screw: " << dy << std::endl;
}
