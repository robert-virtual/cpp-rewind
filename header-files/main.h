#include <iostream>

class Person {
public:
  Person(std::string _name) { this->name = _name; }
  std::string name;
  std::string sayHello() { return "Hola " + this->name; }
};
