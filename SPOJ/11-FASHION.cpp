#include <bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
void solve()
{
  int n,i,x;
  vector<int> m;
  vector<int> f;
  cin >> n;
  fo(i,n)
  {
    cin >> x;
    m.push_back(x);
  }
  fo(i,n)
  {
    cin >> x;
    f.push_back(x);
  }
  sort(m.begin(),m.end());
  sort(f.begin(),f.end());
  int sum = 0;
  for(int i = n-1; i >= 0; i--)
  {
    sum+=m[i]*f[i];
  }
  cout << sum << endl;
}

int main()
{
  int t;
  cin >> t;
  while(t--) solve();
}
