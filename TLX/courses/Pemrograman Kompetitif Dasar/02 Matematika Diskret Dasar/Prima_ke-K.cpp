#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
#define pb push_back
vector<ll> primeList;
// Batasan sampe prima ke - 77.777
// Menurut tabel pi(x) [prime counting function]
// Ada 1,000,000 prima di range 78,498
// Sumber: https://en.wikipedia.org/wiki/Prime-counting_function#Table_of_%CF%80(x),_x_/_ln_x,_and_li(x)
ll N = 1000000;

void sieve()
{
	bool eliminated[N+1] = {0};
	for(ll i = 2; i <= N; i++)
	{
		if(!eliminated[i])
		{
			primeList.pb(i);
			ll j = i*i;
			while(j <= N)
			{
				eliminated[j] = true;
				j+=i;
			}
		}
	}	
}

int main()
{
	sieve();
	int t; cin >> t;
	while(t--)
	{
		int x;
		cin >> x;
		cout << primeList[x-1] << endl;
	}
}