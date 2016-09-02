#include <iostream>
#include <vector>
using std::cin; using std::cout;
using std::vector;
using std::endl;

int main()
{
  vector<int> ivec;
  int tmp = 0;
  while (cin >> tmp){
    ivec.push_back(tmp);
  }

  for (decltype(ivec.size()) ix = 1; ix != ivec.size(); ++ix)
    cout << ivec[ix - 1] + ivec[ix] << " ";
  cout << endl;
  return 0;
}
    
