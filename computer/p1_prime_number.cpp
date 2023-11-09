#include <iostream>

int num_prime_between(int a, int b) {
  int np = 0;

  int num = a;
  while (num <= b) {
    int div = 2;
    while (div <= num / 2) {
      if (num % div == 0) {
        np++;
        break;
      }

      div++;
    }

    num++;
  }

  return np;
}

int main() {
  std::cout << " 5 11: " << num_prime_between(5, 11) << std::endl;
  std::cout << "10 15: " << num_prime_between(10, 15) << std::endl;
}
