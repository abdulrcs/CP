#include <cstdio>
int hasil,Bi,N;
int main(void)
{
  scanf("%i", &N);
  for (int i = 0;i<N;i++)
  {
    scanf("%i", &Bi);
    hasil += Bi;
  }
  printf("%i\n", hasil);
}