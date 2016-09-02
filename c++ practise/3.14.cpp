#include <iostream>
#include <vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main() {
  vector<int> ivec;
  int n = 0;
  while (cin >> n) {
    ivec.push_back(n);
  }

  return 0;
}
