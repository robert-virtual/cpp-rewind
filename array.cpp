#include <iostream>

int main() {
  int array[] = {1, 2, 3, 4, 5, 6};
  int n = 0;
  int arraySize = sizeof(array) / sizeof(int);
  std::cout << "Arrar[" << n << "]:" << array[n] << std::endl;

  std::cout << "Arraysize:" << arraySize << std::endl;
  for (int i = 0; i < arraySize; ++i) {
    std::cout << array[i] << std::endl;
  }

  return 0;
}
