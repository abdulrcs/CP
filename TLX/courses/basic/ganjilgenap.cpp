#include <cstdio>
int N;

int faktor(int x)
{
  if(x == 1)
    return 1;
  else
  {
    if(x%2 == 0)
    {
      return x/2*faktor(x-1);
    }
    else
    {
      return x*faktor(x-1);
    }
  }
}

int main()
{
  scanf("%i", &N);
  printf("%i\n", faktor(N));
}
