// Problem: https://cses.fi/problemset/task/1069

#include <iostream>

int main() {
  std::string dna;
  std::cin >> dna;

  unsigned longest{};
  unsigned start{}, end{};
  while (end < dna.length()) {
    while (end < dna.length() && dna[end] == dna[start]) { end++; }
    longest = longest < (end - start) ? end - start : longest;
    start = end;
  }

  std::cout << longest << '\n';

  return EXIT_SUCCESS;
}
