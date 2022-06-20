// Problem: https://cses.fi/problemset/task/1094

#include <iostream>

unsigned long countMoves(long n, unsigned nums[]) {
  long unsigned moves{};
  for (long i = 1; i < n; i++) {
    if (nums[i - 1] < nums[i]) {
      long j{i};
      while (j > 0 && nums[j - 1] < nums[j]) {
        moves += nums[j] - nums[j - 1];
        nums[j - 1] = nums[j];
        j--;
      }
    }
  }

  return moves;
}


int main() {
  long n;
  std::cin >> n;
  unsigned nums[n];

  for (long i{n - 1}, num{}; i >= 0; i--) {
    std::cin >> num;
    nums[i] = num;
  }
  std::cout << countMoves(n, nums) << '\n';

  return EXIT_SUCCESS;
}
