#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <math.h>
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
	vector<double> v;
	int n; cin >> n;
	double N = n;
	fo(i,n)
	{
		int x; cin >> x;
		v.pb(x);
	}
	sort(v.begin(),v.end());
	if(n&1)
	{
		printf("%.1f\n", v[n/2]);
	}
	else
	{
		int t1 = round(N/2);
		int t2 = t1+1;
		double median = (v[t1-1]+v[t2-1])/2;
		printf("%.1f\n", median);
	}
}