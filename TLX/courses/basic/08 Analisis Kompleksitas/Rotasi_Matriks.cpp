#include <cstdio>
int M,N;
int main()
{
  scanf("%i %i", &M, &N);
  int matriks[M][N];
  for(int i = 0; i < M; i++)
  {
    for(int j = 0; j < N; j++)
    {
      scanf("%i", &matriks[i][j]);
    }
  }
  for(int i = 0; i < N; i++)
  {
    for(int j = M-1; j >= 0; j--)
    {
      printf("%i", matriks[j][i]);
      if(j != 0)
        printf(" ");
    }
    printf("\n");
  }
}
