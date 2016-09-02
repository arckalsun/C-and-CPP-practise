#include <iostream>
#include <string>
#include <vector>

int main()
{
  std::vector<std::string> svec;
  std::string s;

  while (std::cin >> s){
    svec.push_back(s);
  }
  return 0;
}
