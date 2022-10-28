#include <iostream>

int main() {
  for (int i = 1; i < 100; i++) {

    if (i % 5 == 0 && i % 3 == 0) {
      std::cout << "fizzbuzz" << std::endl;
      continue;
    }
    if (i % 3 == 0) {
      std::cout << "fizz" << std::endl;
      continue;
    }
    if (i % 5 == 0) {
      std::cout << "buzz" << std::endl;
      continue;
    }
    if (i % 4 == 0) {
      std::cout << "fizzbazz" << std::endl;
      continue;
    }


    std::cout << i << std::endl;
  }
  return 0;
}
