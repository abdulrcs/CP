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

void swap(int&a,int&b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	vector<int> v;
	int n,k; cin >> n >> k;
	fo(i,n)
	{
		int x; cin >> x;
		v.pb(x);
	}
	for(int i = 0; i < k; i++)
	{
		int min = i;
		for(int j = i+1; j < n; j++)
		{
			if(v[j] < v[min])
				min = j;
		}
		swap(v[i],v[min]);
	}
	cout << v[k-1] << endl;
}