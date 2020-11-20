#include <cstdio>
#include <cmath>
int a,b,c,d,p,q;
int main(void)
{
  scanf("%i %i %i %i", &a,&b,&c,&d);
  p = abs(a-c);
  q = abs(b-d);
  printf("%i\n", p+q);
}
