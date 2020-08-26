#include <cstdio>
#include <cstring>

int n;
char buff[101];

int main(void)
{
  scanf("%s", buff);
  n = strlen(buff);
  for (int i; i<n; i++)
  {
    if (buff[i] >= 65 && buff[i] <= 90)
    {
      printf("%c", buff[i]);
    }
  }
}
