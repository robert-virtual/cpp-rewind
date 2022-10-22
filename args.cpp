#include <iostream>

int main(int count, char **args) {

  std::cout << "count: " << count << std::endl;
  for (int i = 0; i < count; i++) {
    std::cout << "args: " << args[i] << std::endl;
  }
  return 0;
}
