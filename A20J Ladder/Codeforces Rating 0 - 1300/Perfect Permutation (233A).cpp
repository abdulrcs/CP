#include <iostream>
#include <string>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define fo(i,n) for(i=0;i<n;i++)
typedef long long ll;

int main()
{
  int n;
  cin >> n;
  if(n & 1)
  {
    cout << -1 << endl;
    return 0;
  }
  for(int i = n; i > 0; i--)
  {
    cout << i << " ";
  }
  cout << endl;
}
