#include <iostream>
#include <vector>
#include <string>
  
using std::cout;  using std::cin;  using std::endl;
using std::string;
using std::vector;

void check(const vector<int> iv)
{
  if (iv.empty())
    cout << "size: 0; no values." << endl;
  else {
    cout << "size: " << iv.size() << "; values:";
    for (auto it = iv.begin(); it != iv.end(); ++it) cout << *it << ",";
    cout << "\b." << endl;
  }
}

void check(const vector<string>& sv)
{
  if (sv.empty())
    cout << "size: 0; no values." << endl;
  else {
    cout << "size: " << sv.size() << "; values:";
    for (auto it = sv.begin(); it != sv.end(); ++it)
      if (it->empty())
	cout << "(null)"
	     <<",";
      else
	cout << *it << ",";
    cout << "\b." << endl;
  }
}

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
  check(v1);
  check(v2);
  check(v3);
  check(v4);
  check(v5);
  //v6, v7
  check(v6);
  check(v7);
  return 0;

}
