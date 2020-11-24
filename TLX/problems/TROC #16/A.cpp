#include <iostream>
#include <vector>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl
bool cekprima(int x)
{
  if(x < 2)
    return 0;
  else
  {
    for(int i = 2; i*i <= x; i++)
    {
      if(x%i == 0)
        return 0;
    }
    return true;
  }
}

int main()
{
  int i,n;
  cin >> n;
  if(n == 1)
  {
    cout << 1 << " " << 1 << endl;
    return 0;
  }
  vector<int> v;
  for(int i = 2; i <= n; i++)
  {
    if(cekprima(i))
    {
      while(n%i == 0)
      {
        n/=i;
        v.push_back(i);
      }
    }
  }
  int x = 1;
  for(int i = 0; i < v.size(); i++)
  {
    if(i != v.size()-1)
    {
      x*=v[i];
    }
  }
  cout << x << " " << v[v.size()-1] << endl;
}
