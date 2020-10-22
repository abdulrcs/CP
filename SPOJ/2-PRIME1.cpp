#include <iostream>
using namespace std;
int t;

bool checkPrime(int n)
{
  if(n < 2)
    return 0;
  else
  {
    for(int i = 2; i*i <= n; i++)
    {
      if(n%i == 0)
        return 0;
    }
  }
  return 1;
}

void solve()
{
  int a,b;
  cin >> a >> b;
  for(int i = a; i <= b; i++)
  {
    if(checkPrime(i))
      cout << i << endl;
  }
}

int main()
{
  cin >> t;
  while(t--) solve();
}
