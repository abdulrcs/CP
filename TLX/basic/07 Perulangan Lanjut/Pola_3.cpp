#include <cstdio>
int N,k;
int main(void)
{
  scanf("%i", &N);
  for (int i;i<N;i++)
  {
    for (int j = 0;j<=i;j++)
    {
      printf("%i", k);
      k++;
      if(k == 10)
        k = 0;
    }
    printf("\n");
  }
}
