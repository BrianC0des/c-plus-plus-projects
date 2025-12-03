#include <cmath>
#include <iostream>
using namespace std;

int solveForX(int a, int b, int c) {
  return -b + (sqrt(pow(b, 2) - (4 * a * c)));
}

int main() {
  int a = 7, b = 5, c = 5;
  int x = solveForX(a, b, c);
  cout << x;
  return 0;
}
