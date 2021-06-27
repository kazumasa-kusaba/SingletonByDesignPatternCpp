#include "singleton_class.hpp"

#include <iostream>

Singleton* Singleton::singleton = nullptr;

Singleton::~Singleton()
{
  delete singleton;
}

void Singleton::greet()
{
  std::cout << "Hello!" << std::endl;
}

Singleton* Singleton::getInstance()
{
  if (singleton == nullptr) {
    singleton = new Singleton();
  }

  return singleton;
}

