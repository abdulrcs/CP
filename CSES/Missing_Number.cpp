// https://cses.fi/problemset/task/1083
#include <cstdio>
#include <cmath>
long long n;
int main()
{
  scanf("%lld", &n);
  int temp;
  long long x = 0;
  long long total = (n*(n+1))/2;
  for(int i = 0;i<n-1;i++)
  {
    scanf("%i", &temp);
    x+=temp;
  }
  printf("%lld\n", total-x);
}
