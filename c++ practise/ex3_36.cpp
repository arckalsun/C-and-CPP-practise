#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::begin;
using std::end;
using std::vector;

bool compare(int *const b1, int *const e1, int *const b2, int *const e2)
{
  //compare size
  if ((e1 - b1) != (e2 - b2)) return false;

  //compare values
  for (int *i = b1, *j = b2; i != e1 && j != e2; ++i,++j)
    {
      if (*i != *j)
	return false;
    }
  return true;
}

int main()
{
  // array
  int arr1[] = { 1,2,3,2+2,2+3};
  int arr2[] = { 1,2,3, 4,  5 };
  cout << "compare arr1 and arr2: "
       << compare(begin(arr1),end(arr1),begin(arr2),end(arr2))
       << endl;
  //vector
  vector<int> vec1 = { 1, 2, 3};
  vector<int> vec2 = { 1,1+1,1+1+1};
  cout << "compare vec1 and vec2: "
    //   << compare(vec1.begin(), vec1.end(),vec2.begin(),vec2.end())
       << (vec1 == vec2)
       << endl;
  cout << "sizeof(bool) is : "
       << sizeof(bool)
       <<endl;
  
  return 0;
}
