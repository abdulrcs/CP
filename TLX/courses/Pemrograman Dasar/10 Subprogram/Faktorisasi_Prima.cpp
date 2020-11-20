#include <cstdio>
int N,pangkat = 0;
bool prima(int x) {
  if (x < 2) {
    return false;
  }
  for (int i = 2; i*i <= x; i++)
  {
    if (x % i == 0)
    {
      return false;
    }
  }
    return true;
}

int main()
{
  scanf("%i", &N);
  int temp = N;
  for(int j = 2; j <= temp; j++)
  {
    if(prima(N))
    {
      printf("%i", N);
      break;
    }
    else if(prima(j))
    {
      while(N%j == 0)
      {
        if(N/j == 1 && pangkat < 1)
        {
          printf("%i", j);
          break;
        }
        N/=j;
        pangkat++;
        if(pangkat > 1)
        {
          continue;
        }
        else
        {
          printf("%i", j);
        }
      }
      if(pangkat > 1 && N == 1)
        printf("^%i", pangkat);
      else if(pangkat > 1)
      {
        printf("^%i x ", pangkat);
      }
      else if(pangkat == 1)
        printf(" x ");
      pangkat = 0;
    }
  }
  printf("\n");
}
