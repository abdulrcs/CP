#include <cstdio>
int x[100] = {};
int i;
int main()
{
  while(scanf("%i", &x[i]) != EOF)
  {
    i++;
  }
  for(int j = i-1; j >= 0;j--)
  {
    printf("%i\n", x[j]);
  }
}
