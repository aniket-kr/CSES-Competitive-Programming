// Problem: https://cses.fi/problemset/task/1083

#include <iostream>

int main() {
  unsigned long sum = 0;

  unsigned long n;
  std::cin >> n;
  for (unsigned i{1}, num; i < n; i++) {
    std::cin >> num;
    sum += num;
  }
  std::cout << (n*(n+1)/2 - sum) << '\n';

  return EXIT_SUCCESS;
}
