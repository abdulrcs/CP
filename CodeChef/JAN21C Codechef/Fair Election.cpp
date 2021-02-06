#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
using namespace std;
#define fo(i,n) for(int i = 0; i < n; i++)
#define deb(x) cout << #x << "=" << x << endl;
#define deb2(x,y) cout << #x << "=" << x << "," << #y << "=" << y << endl;
#define pb push_back
#define mp make_pair
#define F first
#define S second
typedef long long ll;

void solve()
{
  int n,m; cin >> n >> m;
  int x[n],y[m];
  int sum1=0,sum2=0;
  fo(i,n)
  {
    cin >> x[i];
    sum1+=x[i];
  }
  sort(x,x+n);
  fo(i,m)
  {
    cin >> y[i];
    sum2+=y[i];
  }
  sort(y,y+m,greater<int>());
  int swaps = 0;
  fo(i,n)
  {
    if(sum1 > sum2)
      break;
    sum1-=x[i];
    sum1+=y[i];
    sum2-=y[i];
    sum2+=x[i];
    swaps++;
  }
  cout << (sum1 > sum2 ? swaps : -1) << endl;
}

int main()
{
  int t; cin >> t;
  while(t--)
  {
    solve();
  }
}