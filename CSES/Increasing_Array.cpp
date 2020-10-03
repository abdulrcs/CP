// https://cses.fi/problemset/task/1094/
#include <cstdio>
typedef long long ll;
ll n,counter;
int main()
{
  scanf("%lld", &n);
  ll x[n];
  for(int i = 0; i < n; i++)
  {
    scanf("%lld", &x[i]);
    if(x[i-1] > x[i] && i != 0)
    {
      counter+=x[i-1]-x[i];
      x[i]+=(x[i-1]-x[i]);
    }
  }
  printf("%lld\n", counter);
}
