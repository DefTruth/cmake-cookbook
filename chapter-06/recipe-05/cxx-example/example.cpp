// provides PROGRAM_VERSION
#include "version.h"

#include <iostream>

int main() {
  std::cout << "This is output from example code v" << PROGRAM_VERSION << ":"
            << std::endl;

  std::cout << "Hello CMake world!" << std::endl;
}