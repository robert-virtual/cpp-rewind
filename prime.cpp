#include <cmath>
#include <iostream>
#include <vector>

void divisors(int n, std::vector<int> &output) {
  int i = 2;
  double n_root = sqrt(n);
  while (i <= n_root) {
    if (n % i == 0) {
      output.push_back(i);
      // std::cout << "div: " << i << std::endl;
    }
    i++;
  }
}

bool is_prime(int n, std::vector<int> &output) {
  divisors(n, output);
  if (output.size() > 0) {
    return false;
  }
  return true;
}

int main() {
  bool next = true;
  int n = 0;
  while (next) {

    std::cout << "Ingrese un numero (-1 para salir): ";
    std::cin >> n;
    if (n == -1) {
      return 0;
    }
    std::vector<int> divs;
    bool prime = is_prime(n, divs);
    divs.insert(divs.begin(),1);
    divs.push_back(n);

    std::cout << "divisors: " << divs.size() << std::endl;
    for (int i = 0; i < divs.size(); i++) {
      std::cout << i+1 << ") " << divs[i] << std::endl;
    }
    if (prime) {
      std::cout << n << " is prime" << std::endl;
      continue;
    }
    std::cout << n << " is not prime" << std::endl;
  }

  return 0;
}
