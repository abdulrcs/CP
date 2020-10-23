#include <bits/stdc++.h>
using namespace std;
int t;

string reverse(string n)
{
  string s;
  for(char c: n)
  {
    string temp = "";
    temp+=c;
    s.insert(0, temp);
  }
  return s;
}

void solve()
{
  int x,y,sum,ans;
  string a,b;
  cin >> a >> b;
  x = stoi(reverse(a));
  y = stoi(reverse(b));
  sum = x+y;
  ans = stoi(reverse(to_string(sum)));
  cout << ans << endl;
}

int main()
{
  cin >> t;
  while(t--) solve();
}
