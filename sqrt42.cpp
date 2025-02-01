#include <iostream>
int main() {
  double sqrt;
  asm("sqrtsd %1, %0" : "=x"(sqrt) : "x"(42.0)); //Non Apple Silicon
  // asm("fsqrt %d0, %d1" : "=w"(sqrt) : "w"(42.0)); // Apple Silicon
  std::cout << sqrt;
}