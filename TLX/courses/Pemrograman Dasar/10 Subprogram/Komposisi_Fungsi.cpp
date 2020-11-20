#include <cstdio>
#include <math.h>
int A,B,K,X;
int hasil;
int fungsi(int a, int x, int b)
{
  return abs((a*x)+b);
}

int main()
{
  scanf("%i %i %i %i", &A, &B, &K, &X);
  for(int i = 0; i < K; i++)
  {
    hasil = fungsi(A, X, B);
    X = hasil;
  }
  printf("%i\n", hasil);
}
