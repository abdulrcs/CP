#include <cstdio>
int N,A,B,T;
int main(void)
{
  scanf("%i\n", &N);
  for (int i = 0;i<N;i++)
  {
    scanf("%i", &T);
    if(T > A || i == 0)
      A = T;
    if(T < B || i == 0)
      B = T;
  }
  printf("%i %i\n", A, B);
}