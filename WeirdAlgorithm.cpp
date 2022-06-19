// Problem: https://cses.fi/problemset/task/1068

#include <iostream>

int main() {
  unsigned long num;
  std::cin >> num;

  std::cout << num << ' ';
  while (num > 1) {
    if (num % 2 == 0) { num /= 2; }
    else { num = 3 * num + 1; }
    std::cout << num << ' ';
  }
  std::cout << '\n';

  return EXIT_SUCCESS;
}
