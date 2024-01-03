#include <iostream>

long long sum(int a, int b) {
  return a + 0LL + b;
}

long long subtract(int a, int b) {
  return a - 0LL -  b;
}

long long multiplication(int a, int b) {
  return a * 1LL * b;
}

long long division(int a, int b) {
  if (b == 0) {
    std::cout << "Деление на 0 запрещено" << std::endl;
    return 0;
  }
  return 1LL * a / b;
}

int main() {
  int x = 5;
  int y = 20;
  std::cout << subtract(x, y) << std::endl;
  std::cout << division(4, 0) << std::endl;
  return 0;
}
