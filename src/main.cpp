#include <iostream>

#include "singleton_class.hpp"

int main(void)
{
  Singleton::getInstance()->greet();

  // CAUTION: error occurs because of constructor is set to private
  //Singleton singleton;

  return 0;
}

