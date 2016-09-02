#include <iostream>
#include <vector>
#include <cstddef>
using std::cout;
using std::endl;
using std::vector;
int main()
{
  
  //array
  int array[10];
  for (size_t index = 0; index < 10; ++index) {
    array[index] = index;
    cout << array[index] << " ";
  }
  //vector
  vector<int> vec;
  for (size_t index = 0; index < 10; ++index) {
    vec.push_back(index);
  }
  for (auto i : vec) cout << i << " ";
  cout << endl;
  return 0;
}
