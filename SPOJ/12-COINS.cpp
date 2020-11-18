#include <iostream>
#include <utility>
#include <vector>
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define fo(i,n) for(i=0;i<n;i++)
#define push_back pb
#define make_pair mp
#define F first
#define S second
typedef long long ll;
using namespace std;

ll coins(ll x)
{
    ll a = x >> 1;
    ll b = x >> 2;
    ll c = x / 3;
    ll ans = a+b+c;
    if(ans <= x)
    {
      return x;
    }
    else
    {
      return coins(a) + coins(b) + coins(c);
    }
}

int main()
{
  ll n;
  while(cin >> n)
  {
    cout << coins(n) << endl;
  }
}
