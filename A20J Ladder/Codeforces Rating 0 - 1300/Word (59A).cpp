#include <iostream>
#include <string>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define fo(i,n) for(i=0;i<n;i++)
typedef long long ll;
int main()
{
  int low = 0,up = 0;
  string s;
  cin >> s;
  
  for(char&c : s)
  {
    if(c >= 'a' && c <= 'z')
      low++;
    else
      up++;
  }
  if(low > up || low == up)
  {
    for(char c: s)
      cout << (char)tolower(c);
  }
  else if(up > low)
  {
    for(char c: s)
      cout << (char)toupper(c);
  }
  cout << endl;
}