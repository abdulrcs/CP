#include <cstdio>
int N,counter;
long x;
int main()
{
  scanf("%i", &N);
  for(int i = 0; i < N; i++)
  {
    scanf("%ld", &x);
    for(int j = 2; j < x/2;j++)
    {
      if(x % j == 0)
      {
        counter++;
      }
      else if(counter > 2)
        break;
    }
    if(counter <= 2)
      printf("YA\n");
    else
      printf("BUKAN\n");
    counter = 0;
  }  
}
