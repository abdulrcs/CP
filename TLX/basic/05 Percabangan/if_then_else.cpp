#include <cstdio>
int x;
int main(void)
{
  scanf("%i", &x);
  if(x > 0)
  {
    printf("positif\n");
  }
  else if (x < 0)
  {
    printf("negatif\n");
  }
  else
  {
    printf("nol\n");
  }
}
