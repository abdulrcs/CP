#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <map>
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
	int n,x; cin >> n >> x;
	double w[n],c[n];
	vector<pair<double,double>> h;
	fo(i,n)
		cin >> w[i];
	fo(i,n)
		cin >> c[i];
	fo(i,n)
	{
		h.pb(mp(c[i]/w[i],w[i]));
	}
	sort(h.begin(),h.end(),greater<int,int>);
	// fo(i,n)
	// 	cout << h[i].F << " " << h[i].S << endl;
	int index = 0;
	double harga = 0;
	double berat = 0;
	while(berat < x && index >= 0)
	{
		berat++;
		h[index].S--;
		harga+=h[index].F;
		if(h[index].S <= 0)
			index++;
	}
	printf("%.5f\n", harga);
}