#include <cstdio>
int x;
int main(void)
{
  scanf("%i", &x);
  if(x > 0 && x%2 == 0)
  {
    printf("%i\n", x);
  }
}
