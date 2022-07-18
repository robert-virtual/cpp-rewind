#include <iostream>
#include <random>

// d16G
// d10j
int main() {
  std::random_device dev;
  std::mt19937 rng(dev());
  std::uniform_int_distribution<std::mt19937::result_type> dist6(1, 6);
  int r = dist6(rng);
  std::cout << r << std::endl;
  return 0;
}
