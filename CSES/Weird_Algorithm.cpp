#include <cstdio>
long long N;
int main()
{
  scanf("%lld", &N);
  printf("%lld ", N);
  while(N != 1)
  {
    if(N%2 == 0)
    {
      N/=2;
      printf("%lld", N);
    }
    else
    {
      N = (N*3)+1;
      printf("%lld", N);
    }

    if(N != 1)
      printf(" ");
  }
  printf("\n");
}
