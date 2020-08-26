#include <cstdio>
int N;
int main(void)
{
  scanf("%i", &N);
  for (int i = N;i >= 1;i--)
  {
    if(N%i == 0)
    {
      printf("%i\n", i);
    }
  }
}
