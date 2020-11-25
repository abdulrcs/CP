#include <iostream>
#include <math.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl
typedef long long ll;
int mod = 1009;
ll fac(ll x)
{
  ll ans = 1;
  if(x > mod)
    return 0;
  for(int i = 1; i <= x; i++)
  {
    ans = (ans*i)%mod;
  }
  return ans;
}

int main()
{
  ll a,b;
  cin >> a >> b;
  cout << (a+fac(b))%mod<< endl;
}
