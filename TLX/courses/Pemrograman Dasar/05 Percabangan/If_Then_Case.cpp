#include <cstdio>
int x;
int main(void)
{
  scanf("%i", &x);
  if(x/10000 > 0)
    printf("puluhribuan\n");
  else if(x/1000 > 0)
    printf("ribuan\n");
  else if(x/100 > 0)
    printf("ratusan\n");
  else if(x/10 > 0)
    printf("puluhan\n");
  else
    printf("satuan\n");
}
