/**
 * @file 1.cpp
 * @brief Day 2.1: 1202 Program Alarm
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
  vector<int> program;
  int value;
  while (cin >> value) {
    cin.ignore(1, ',');
    program.emplace_back(value);
  }
  program[1] = 12;
  program[2] = 2;
  for (int i = 0; i + 3 < program.size(); i += 4) {
    const int opcode = program[i];
    const int a = program[program[i + 1]];
    const int b = program[program[i + 2]];
    int& res = program[program[i + 3]];
    if (opcode == 1) {
      res = a + b;
    } else if (opcode == 2) {
      res = a * b;
    } else if (opcode == 99) {
      break;
    }
  }
  cout << program[0] << '\n';
  return 0;
}
