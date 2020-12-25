#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s,t;
	cin >> s >> t;
	bool mata = true;
	for(int i = 0; i < s.length(); i++)
	{
		if(tolower(s[i]) != tolower(t[i]))
			mata = false;
	}
	cout << (mata ? "20/20" : "x_x") << endl;
}