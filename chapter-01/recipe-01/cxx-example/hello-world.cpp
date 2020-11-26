#include <cstdlib>
#include <iostream>
#include <string>

std::string say_hello() { return std::string("Hello, CMake world!"); }

int main() {
  std::cout << say_hello() << " Udit" << std::endl;
  return EXIT_SUCCESS;
}
