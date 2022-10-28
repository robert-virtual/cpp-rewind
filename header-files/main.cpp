#include <iostream>
#include "main.h"
#include "hola.h"


int main(){
  std::string name;
  std::cout << "Name: ";
  std::cin >> name;
  Person* robert = new Person(name);
  
    
  std::cout << robert->sayHello() << std::endl;
  std::cout << "hola.h: "<< sayHello(robert->name) << std::endl;
  return 0;
}
