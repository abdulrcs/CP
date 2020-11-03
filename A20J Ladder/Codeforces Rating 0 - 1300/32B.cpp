#include <iostream>
#include <string>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define fo(i,n) for(i=0;i<n;i++)
typedef long long ll;

int main()
{
  int i;
  string s,ans;
  cin >> s;
  fo(i, s.length())
  {
    if(s[i] == '-')
    {
      if(s[i+1] == '.')
      {
        ans+='1';
        i++;
      }
      else if(s[i+1] == '-')
      {
        ans+='2';
        i++;
      }
    }
    else if(s[i] == '.')
    {
      ans+='0';
    }
  }
  cout << ans << endl;
}
