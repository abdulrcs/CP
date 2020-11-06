#include <iostream>
#include <string>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define fo(i,n) for(i=0;i<n;i++)
typedef long long ll;
 
int main()
{
  int lucky = 0;
  string s;
  cin >> s;
  for(char c: s)
  {
    if(c == '4' || c == '7')
      lucky++;
  }
  if(lucky == 7 || lucky == 4)
    puts("YES");
  else
    puts("NO");
}