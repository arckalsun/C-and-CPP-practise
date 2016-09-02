#include<iostream>
#include<string>
//using std::string;
//using std::cout;
//using std::cin;
//using std::endl;
using namespace std;

int main()
{
	string str1, str2;
	//string lines = "hello\tworld\n\nworld\nis\tso\t\nbeautiful!\n";
	//cout << lines;
	//while (getline(cin,line))
	//{
	//	if (line.size() > 5)
	//		cout << line << endl;
	//}
	getline(cin,str1);
	getline(cin,str2);
	if (str1 == str2)
		cout << "str1 equal str2 " << endl;
	else
		cout << ((str1>str2)?str1:str2)  << endl;
	
	return 0;
}
