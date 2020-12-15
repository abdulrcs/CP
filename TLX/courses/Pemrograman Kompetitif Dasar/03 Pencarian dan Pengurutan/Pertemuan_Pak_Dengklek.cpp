#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
using namespace std;
#define fo(i,n) for(int i = 0; i < n; i++)
#define deb(x) cout << #x << "=" << x << endl;
#define deb2(x,y) cout << #x << "=" << x << "," << #y << "=" << y << endl;
#define pb push_back
#define mp make_pair
#define F first
#define S second
typedef long long ll;

int main()
{
	vector<pair<int,string>> v;
	int n; cin >> n;
	fo(i,n)
	{
		string s; cin >> s;
		v.pb(mp(s.length(),s));
	}
	sort(v.begin(),v.end());
	fo(i,n)
	{
		cout << v[i].S << endl;
	}
}