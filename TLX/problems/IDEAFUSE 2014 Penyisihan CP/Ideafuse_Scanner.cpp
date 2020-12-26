#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s; getline(cin,s);
	int x = s.find("ideafuse");
	cout << (x == -1 ? -1 : x+1) << endl;
}