#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int x = 0, y = 0;
	for(auto c: s)
	{
		if(c == 'R') x++;
		else if(c == 'L') x--;
		else if(c == 'U') y++;
		else if(c == 'D') y--;
	}
	cout << x << " " << y << endl;
}