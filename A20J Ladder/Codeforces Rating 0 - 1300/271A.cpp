#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define fo(i,n) for(i=0;i<n;i++)
typedef long long ll;

bool check(multiset<int> year)
{
  for(auto x: year)
  {
    if(year.count(x) > 1)
      return false;
  }
  return true;
}

int main()
{
  int n,i;
  cin >> n;
  int ans = n;
  bool dis = false;
  while(true)
  {
    multiset<int> year;
    ans++;
    string s = to_string(ans);
    for(char c: s)
    {
      year.insert(c);
    }
    if(check(year))
      break;
  }
  cout << ans << endl;
}
