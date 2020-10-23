#include <bits/stdc++.h>
typedef long long ll;
using namespace std; 
int t;
void solve()
{
  ll n,total = 0;
  cin >> n;
  while(true)
  {
    if(n >= 5)
    {
      total += n/5;
      n/=5;
    }
    else
      break;
  }
  cout << total << endl;
}

int main()
{
  cin >> t;
  while(t--) solve();
}
