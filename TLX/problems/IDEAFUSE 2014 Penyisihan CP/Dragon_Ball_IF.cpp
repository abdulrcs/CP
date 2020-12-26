#include <iostream>
#include <string>
using namespace std;
#define fo(i,n) for(int i=0;i<n;i++)
int main()
{
	int n; cin >> n;
	fo(i,n)
	{
		int x; cin >> x;
		string s = "kamehameha", o = "";
		for(char c : s)
		{
			if(c == 'a' || c == 'e')
				fo(i,x) o+=c;
			else o+=c;
		}
		cout << o << endl;
	}
}
