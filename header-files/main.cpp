#include <iostream>
#include "main.h"


int main(){
  std::string name;
  std::cout << "Name: ";
  std::cin >> name;
  Person* robert = new Person(name);
    
  std::cout << robert->sayHello() << std::endl;
  return 0;
}
