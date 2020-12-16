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

void binarySearch(vector<string> v, string x)
{
	int kiri = 0, kanan = v.size()-1, hasil = -1;
	while(kiri <= kanan && hasil == -1)
	{
		int tengah = (kiri+kanan)/2;
		if(v[tengah] < x)
			kiri = tengah + 1;
		else if(v[tengah] > x)
			kanan = tengah-1;
		else
		{
			hasil = tengah;
		}
	}
	cout << hasil+1 << endl;
}

int main()
{
	int n; cin >> n;
	vector<string> v;
	fo(i,n)
	{
		string s; cin >> s;
		v.pb(s);
		sort(v.begin(),v.end());
		binarySearch(v, s);
	}

}