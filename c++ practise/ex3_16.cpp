#include <iostream>
#include <vector>
#include <string>

using std::cout;  using std::cin;  using std::endl;
using std::string;
using std::vector;
void printVectorInt(vector<int> &v);
void printVectorString(vector<string>);
int main()
{
  vector<int> v1;
  vector<int> v2(10);
  vector<int> v3(10, 42);
  vector<int> v4{10};
  vector<int> v5{10, 42};
  vector<string> v6{10};
  vector<string> v7{10, "hi"};
  // v1-v5
  printVectorInt(v1);
  printVectorInt(v2);
  printVectorInt(v3);
  printVectorInt(v4);
  printVectorInt(v5);
  //v6, v7
  printVectorString(v6);
  printVectorString(v7);
  return 0;

}
void printVectorInt(vector<int>& v)
{
  cout << "vector<int>.size(): " << v.size() << "\tValues:{ ";
  //  for (auto i : v)
  //cout << i << ",";
  for (auto it = v.begin(); it != v.end() && !it->empty(); ++it)
    cout << *it << ",";
  
  cout << "\b}";
  cout << endl;
}

void printVectorString(vector<string> v)
{
  cout << "vector<string>.size: " << v.size()
       << "\tvalues: {";
       
  for (auto i : v)
    cout << i << ", ";
  cout << "\b\b}" << endl;
}
