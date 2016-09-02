#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using std::cin; using std::cout;
using std::endl;using std::string;
using std::vector;

int main()
{
  vector<string> svec;
  string temp;
  while (cin >> temp){
    svec.push_back(temp);
  }

  for (auto s : svec){
    for (auto &c : s){
      c = toupper(c);
    }
    cout << s << endl;
  }
  cout << endl;

  return 0;
}

  
