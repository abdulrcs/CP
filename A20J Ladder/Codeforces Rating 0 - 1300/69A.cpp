#include <iostream>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define fo(i,n) for(i=0;i<n;i++)
typedef long long ll;
int main()
{
  ll X = 0;
  ll Y = 0;
  ll Z = 0;
  int t;
  cin >> t;
  while(t--)
  {
    int x,y,z;
    cin >> x >> y >> z;
    X+=x;
    Y+=y;
    Z+=z;
  }
  if(X == 0 && Y == 0 && Z == 0)
    puts("YES");
  else
    puts("NO");
}
