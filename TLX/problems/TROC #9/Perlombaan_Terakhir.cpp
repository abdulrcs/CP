#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s; cin >> s;
	bool o = false;
	for(int i = 0; i < s.length(); i++)
	{
		if(s[i] == 'O' && o == false)
			o = true;
		else if(o == true && s[i] == 'O')
		{
			o = false;
			break;
		}
	}
	puts(o ? "Ya" : "Tidak");
}