#include <cstdio>
int N;
int main (void)
{
  scanf("%i", &N);
  for (int i = 1;i<=N;i++)
  {
    if (i == 42)
    {
      printf("ERROR\n");
      break;
    }
    if(i % 10 == 0)
    {
      continue;
    }
    printf("%i\n", i);
  }
}
