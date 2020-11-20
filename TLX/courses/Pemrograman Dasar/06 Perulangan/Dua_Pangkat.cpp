#include <cstdio>
int N;
int main(void)
{
  scanf("%i", &N);
  while (N%2 == 0)
    N /= 2;
  if (N == 1)
    printf("ya\n");
  else
    printf("bukan\n");
}