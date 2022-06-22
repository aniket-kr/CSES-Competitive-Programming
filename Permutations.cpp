// Problem: https://cses.fi/problemset/task/1070

#include <iostream>
#include <memory>
#include <vector>

unsigned fillAlternate(unsigned arr[], unsigned size, unsigned idx, unsigned start) {
  while (idx < size) {
    arr[idx] = start--;
    idx += 2;
  }

  return start;
}

std::unique_ptr<unsigned[]> getPermutation(unsigned n) {
  auto arr{std::make_unique<unsigned[]>(n)};
  unsigned stopped_at{fillAlternate(arr.get(), n, 0, n)};
  fillAlternate(arr.get(), n, 1, stopped_at);
  return arr;
}

template <typename T>
void printArray(T arr[], unsigned size) {
  for (unsigned i = 0; i < size; i++) {
    std::cout << arr[i] << ' ';
  }
  std::cout << '\n';
}

int main() {
  unsigned n;
  std::cin >> n;

  if (n == 2 || n == 3) {
    std::cout << "NO SOLUTION\n";
  } else if (n == 4) {
    std::cout << "3 1 4 2\n";
  } else {
    printArray(getPermutation(n).get(), n);
  }

  return EXIT_SUCCESS;
}
