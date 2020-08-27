#include <cstdio>
int N,K;
int main(void)
{
  scanf("%i %i", &N, &K);
  for(int i = 1; i<=N;i++)
  {
    if(i % K == 0)
      printf("*");
    else
      printf("%i", i);
    if(i != N)
      printf(" ");
  }
  printf("\n");
}
