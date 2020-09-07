#include <cstdio>
int n,s,t,m,h;
int main(void)
{
  do
  {
    int n,s,t,m,h = 0;
    scanf("%i", &n);
    for (int i; i<n; i++)
    {
      scanf("%i %i", &s, &t);
      t -= h;
      m += s*t;
      h += t;
      if(i == n)
      {
        printf("%i miles\n", m);
      }
    }
  }
  while (n!=-1);
}
