#include <cstdio>

int x, y;
char buff[1001];

int main(void)
{
  scanf("%i %i", &x, &y);
  for (int i = 0; i<x; i++)
  {
    scanf("%s", buff);
  }
  printf("%i\n", y);
}
