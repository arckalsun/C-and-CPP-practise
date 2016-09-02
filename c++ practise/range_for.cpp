#include<iostream>
#include<string>
using namespace std;

int main()
{
  string str("something");
  for (auto c : str)
    cout << c << endl;
  return 0;
}
