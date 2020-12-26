#include <iostream>
#include <set>
using namespace std;
#define fo(i,n) for(int i=0;i<n;i++)
int main()
{
	int n; cin >> n;
	set<int> s;
	fo(i,n)
	{
		int x; cin >> x;
		s.insert(x); 
	}
	cout << s.size() << endl;
}