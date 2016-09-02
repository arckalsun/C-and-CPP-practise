#include<iostream>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
  vector<int> vec;
  int i = 0;
  while (cin >> i){
    vec.push_back(i);
  }
  //check empty
  if (vec.empty()) {
    cout << "input at least one integer." <<endl;
    return -1;
  }
  
  //print the sum of each pair of adjacent elements
  cout << "print the sum of each pair of adjacent elements" << endl;
  for (auto it = vec.begin(); it != vec.end() - 1; ++it) {
    cout << *it + *(it+1) << ", ";
  }
  cout << endl;
  //print the sum of the first and last elements and so on
  cout << "print the sum of the Nth and last Nth elements" << endl;
  //for (auto it = vec.begin(); it != vec.size() / 2; ++it) {
  //cout << *it + *(vec.end()-1-it) << ", ";
  //}
  for (auto beg = vec.begin(),end = vec.end() - 1; beg <= end; ++beg, --end)
    cout << *beg + *end << " ";
  cout << endl;

  return 0;
}
