#include <iostream>
#include <string>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define fo(i,n) for(i=0;i<n;i++)
typedef long long ll;

int main()
{
  string s,t;
  cin >> s;
  cin >> t;
  for(int i = 0; i < s.length(); i++)
  {
    if(s[i] != t[i])
      cout << 1;
    else
      cout << 0;
  }
  cout << endl;
}
