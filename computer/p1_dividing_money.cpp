#include <iostream>

int chop(int amount) {
  int pieces = amount / 8;
  amount %= 8;

  pieces += amount / 3;
  amount %= 3;

  pieces += amount;

  return pieces;
}

int main() {
  auto out = chop(13);
  std::cout << "At least " << out << std::endl;

  out = chop(41);
  std::cout << "At least " << out << std::endl;
}
