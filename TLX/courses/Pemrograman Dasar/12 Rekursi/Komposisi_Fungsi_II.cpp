#include <cstdio>
#include <math.h>
int a,x,b,k;
int fungsi(int x, int k)
{
  if(k == 0)
    return x; // kalo k udah mentok ke 0, return x, jadi sama aja (base case)
  else
  {
    x = fungsi(x, k-1); //fungsi lagi ke k-1
    return abs((a*x)+b);
  }
}

int main()
{
  scanf("%i %i %i %i", &a, &b, &k, &x);
  printf("%i\n", fungsi(x, k));
}
