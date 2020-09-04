#include <cstdio>
#include <cmath>

int n, side;
int main(void)
{
  (void)scanf("%i", &n);
  side = 2 + (pow(2, n)-1);
  printf("%i\n", side*side);
}
