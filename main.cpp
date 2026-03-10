#include <iostream>

int multiply(int a, int b) {
    return a*b;
}


int subtract(int a, int b) {
  return a - b; 
}

int main() {
    std::cout << "team cpp\n";
    std::cout << "2*3 = " << multiply(2,3) << std::endl;
  
  std::cout << "Witaj w naszym programie!" << std::endl;
    std::cout << "5 - 3 = " << subtract(5, 3) << std::endl;
    return 0;
}