#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int x,y;
  cin >> x >> y;
  if(x == y)
  {
    if(x & 1)
      cout << x+y-1 << endl;
    else
      cout << x+y << endl;
  }
  else if(x-y == 2)
  {
    if(x & 1)
      cout << x+y-1 << endl;
    else
      cout << x+y << endl;
  }
  else
    cout << "No Number" << endl;
}

int main()
{
  int t;
  cin >> t;
  while(t--) solve();
}
