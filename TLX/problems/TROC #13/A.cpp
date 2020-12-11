#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n; cin >> n;
	string s; cin >> s;
	for(int i = 1; i < s.length(); i++)
	{
		if(s[i-1] == s[i])
		{
			s.erase(i,1);
			i--;
		}
	}
	cout << s << endl;
}