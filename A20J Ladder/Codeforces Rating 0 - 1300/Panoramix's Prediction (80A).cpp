#include <iostream>
#include <string>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define fo(i,n) for(i=0;i<n;i++)
typedef long long ll;

bool cekPrima(int x)
{
  if(x < 2)
    return 0;
  else
  {
    for(int i = 2; i*i <= x;  i++)
    {
      if(x%i == 0)
        return 0;
    }
  }
  return 1;
}

int main()
{
  int m,n,next;
  cin >> m >> n;
  for(int i = m+1; i < m*m; i++)
  {
    if(cekPrima(i))
    {
      next = i;
      break;
    }
  }
  if(n == next)
    puts("YES");
  else
    puts("NO");
}
