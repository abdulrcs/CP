#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

ll FPB(ll a,ll b)
{
	if(b == 0)
		return a;
	else
	{
		return FPB(b, a%b);
	}
}

ll KPK(ll a, ll b)
{
	return a*b/FPB(a, b);
}

int main()
{	
	ll curKPK = 1;
	vector <ll> num;
	int n; cin >> n;
	for(int i = 0; i < n; i++)
	{
		ll x; cin >> x;
		curKPK = KPK(curKPK, x);
	}
	cout << curKPK << endl;
}
