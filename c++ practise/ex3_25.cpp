#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
  vector<unsigned> scores(11,0);
  unsigned grade;
  while (cin >> grade) {
    if (grade <= 100)
      //      ++scores[grade/10];
      ++*(scores.begin() + (grade/10));
  }

  // print scores
  for (auto i : scores) cout << i << " ";
  cout << endl;

  return 0;
}
