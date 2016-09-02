#include<iostream>
#include<iterator>
using std::cout;
using std::endl;
//using std::begin;
//using std::end;

int main()
{
  int arr[5]={5,4,3,2,1};
  //int *b = begin(arr);
  //int *e = end(arr);
  
  for (int *b = begin(arr), *e = end(arr); b != e; ++b)
    *b = 0;
  for (auto i : arr)
    cout << i << " ";
  cout << endl;
  return 0;
}
