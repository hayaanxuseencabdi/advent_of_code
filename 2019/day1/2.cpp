/**
 * @file main.cpp
 * @brief Day 1.2: The Tyranny of the Rocket Equation
 * @date 02-12-2019
 * @author Hayaan Abdi
 */

#include <bits/stdc++.h>

using namespace std;

using ll = long long;
constexpr int INF = numeric_limits<int>::max();
template <typename T, typename... Args>
const T& min(const T& a, Args... args) {
  return min(a, min(args...));
}
template <typename T, typename... Args>
const T& max(const T& a, Args... args) {
  return max(a, max(args...));
}

#pragma GCC optimize("O3")
static const auto __ = [] {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  return nullptr;
}();

int main(int argc, char* argv[]) {
  ll total_fuel = 0;
  ll mass;
  while (cin >> mass) {
    ll extra_fuel = mass / 3 - 2;
    while (extra_fuel > 0) {
      total_fuel += extra_fuel;
      extra_fuel = extra_fuel / 3 - 2;
    }
  }
  cout << total_fuel << '\n';
  return 0;
}
