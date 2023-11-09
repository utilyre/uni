#include <cmath>
#include <iostream>

int rev(int num) {
  if (num < 0) {
    return -1;
  }

  int n = std::log10(num) + 1;

  int reversed = 0;
  for (int i = 0; i < n; i++) {
    int digit = num % 10;
    num /= 10;

    reversed += digit * std::pow(10, n - i - 1);
  }

  return reversed;
}

int main() {
  auto reversed = rev(1024);
  std::cout << "Reverse of 1024 is: " << reversed << std::endl;

  reversed = rev(-10);
  std::cout << "Reverse of -10 is: " << reversed << std::endl;

  reversed = rev(2);
  std::cout << "Reverse of 2 is: " << reversed << std::endl;

  reversed = rev(9238479);
  std::cout << "Reverse of 9238479 is: " << reversed << std::endl;
}
