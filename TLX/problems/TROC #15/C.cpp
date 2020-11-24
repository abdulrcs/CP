#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll fpb(ll a, ll b)
{
  if(a == 0)
    return b;
  else
    return fpb(b%a, a);
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(0);
  ll FPB,KPK;
  cin >> FPB >> KPK;
  if(KPK%FPB != 0)
  {
    puts("-1 -1");
    return 0;
  }
  ll DV = KPK/FPB;
  ll maks = 1000000000000ll;
  ll A = -1, B = -1;
  for(ll i = 1ll; i*i <= DV; i++)
  {
    if(DV % i == 0)
    {
      if(maks > (DV/i)+i && fpb(DV / i,i) == 1ll)
      {
        maks = DV/i+i;
        A = DV / i;
        B = i;
      }
    }
  }
  cout << A * 1ll * FPB << " " << B * 1ll * FPB << endl;
  return 0;
}