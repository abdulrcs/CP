#include <cstdio>
int K,Q,r,b,k,p; // 1 king, 1 queen, 2 rooks, 2 bishops, 2 knights, 8 pawns
int main()
{
  scanf("%i %i %i %i %i %i", &K, &Q, &r, &b, &k, &p);
  printf("%i %i %i %i %i %i\n", 1-K, 1-Q, 2-r, 2-b, 2-k, 8-p);
}
