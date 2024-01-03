#include <iostream>

int sum(int a, int b) {
  return a + b;
}

int subtract(int a, int b) {
  return a - b;
}

int multiplication(int a, int b) {
  return a * b;
}

int division(int a, int b) {
  return a / b;
}

int main() {
  int x = 5;
  int y = 20;
  std::cout << subtract(x, y) << std::endl;
  return 0;
}
