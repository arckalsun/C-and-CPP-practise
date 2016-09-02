#include <iostream>
#include <vector>
using std::cin;using std::cout;using std::endl;
using std::vector;

int main()
{
  vector<int> ivec;
  int tmp = 0;
  while (cin >> tmp)
    ivec.push_back(tmp);
  for (decltype(ivec.size()) ix = 0; ix != ivec.size()/2; ++ix)
    cout << ivec[ix] + ivec[ivec.size() - 1 - ix] << endl;
  return 0;
}
