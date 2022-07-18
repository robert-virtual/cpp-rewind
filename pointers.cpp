#include <iostream>

int main() {
  int n = 10;
  int *apuntador;
  apuntador = &n;
  std::cout << "Valor: " << n << std::endl;
  std::cout << "Apuntador: " << apuntador << std::endl;
  std::cout << "Valor Apuntador: " << *apuntador << std::endl;
  std::cout << "Apuntador[0]: " << apuntador[0] << std::endl;
  return 0;
}
