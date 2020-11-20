#include <cstdio>
#include <math.h>
int N,x;
int main() {
  scanf("%d", &N);
  for (int i = 0; i < N; i++)
  {
    scanf("%d", &x);
    bool prime = true;
    if (x == 1) {
      prime = false;
    }
    int divisor = 2;
    while (divisor <= sqrt(x)) {
      if (x % divisor == 0) {
        prime = false;
      }
      divisor++;
    }
    if (prime) {
      printf("YA\n");
    } else {
      printf("BUKAN\n");
    }
  }
}
