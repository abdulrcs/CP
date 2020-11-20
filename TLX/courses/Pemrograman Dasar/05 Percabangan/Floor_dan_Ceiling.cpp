#include <cstdio>
#include <cmath>
float x;
int main(void)
{
  scanf("%f", &x);
  int y = trunc(x);
  if (x == trunc(x))
  {
    printf("%i %i\n", y, y);
  }
  else if (x>0)
  {
    printf("%i %i\n", y, y+1);
  }
  else
  {
    printf("%i %i\n", y-1, y);
  }
}
