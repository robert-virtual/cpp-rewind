#include <iostream>

void sayhi(std::string name) { std::cout << "Hola " << name << std::endl; }

int len(int *arr) {
  int arrLen = sizeof(&arr) / sizeof(*arr);
  return arrLen;
}

void show(int *arr) {
  int arrLen = sizeof(&arr) / sizeof(*arr);
  for (int i = 0; i < arrLen; ++i) {
    std::cout << arr[i] << std::endl;
  }
}

int main() {
  int lista[] = {2, 4, 6, 1, 2, 3, 4, 56, 0};
  int arrLen = len(lista);
  int mitad1[arrLen / 2];
  int mitad2[arrLen - arrLen / 2];

  std::cout << "arraylen: " << arrLen << ", mitad:" << arrLen / 2 << std::endl;
  show(lista);
  /*while(){

  }*/

  return 0;
}
