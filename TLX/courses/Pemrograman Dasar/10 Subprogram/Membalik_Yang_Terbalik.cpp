#include <cstdio>
int A,B;
int reverse(int x)
{
  int temp = x;
  int ret = 0;
  while(temp > 0)
  {
      ret = (ret * 10) + (temp%10);
      temp = temp/10;
  }
  return ret;
}

int main(void)
{
  scanf("%i %i", &A, &B);
  printf("%i\n", reverse(reverse(A)+reverse(B)));
}
