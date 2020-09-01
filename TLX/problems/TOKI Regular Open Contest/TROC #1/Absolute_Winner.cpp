#include <cstdio>
int A,B,C;
int main()
{
  scanf("%i %i %i", &A, &B, &C);
  int babak = (A+B+C)/7;
  if(A == 4*babak || B == 4*babak || C == 4*babak)
    printf("YA\n");
  else
    printf("TIDAK\n");
}
