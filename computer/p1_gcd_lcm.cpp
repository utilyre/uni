#include <iostream>
#include <string>

int gcd(int x, int y) {
  while (y != 0) {
    int r = x % y;
    x = y;
    y = r;
  }

  return x;
}

int main() {
  std::string input;
  std::getline(std::cin, input);

  auto pos = input.find(" ");
  int a = std::stoi(input.substr(0, pos));
  int b = std::stoi(input.substr(pos + 1));

  int div = gcd(a, b);
  std::cout << div << " " << a * b / div << std::endl;
}
