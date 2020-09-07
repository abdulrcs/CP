#include <cstdio>
int N,x,t;
int main(void)
{
  scanf("%i", &N);
  for (int i = 0;i<N;i++)
  {
    scanf("%i", &x);
    if (x<0)
      t++;
  }
  printf("%i",t);
}
