#include <iostream>
#include <vector>
#include <math.h>
#include <utility>
#include <algorithm>
using namespace std;
#define pb push_back
#define mp make_pair
#define F first
#define S second
int main()
{
	int n, patokan;
	cin >> n >> patokan;
	vector<pair<int,int>> v;
	for(int i = 0; i < n; i++)
	{
		int x; cin >> x;
		v.pb(mp(abs(x-patokan),x));
	}
	sort(v.begin(),v.end());
	cout << v[0].S << endl;
}