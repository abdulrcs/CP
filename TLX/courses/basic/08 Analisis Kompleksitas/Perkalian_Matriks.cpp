#include <cstdio>
int N,M,P;
int temp;
int main()
{
  scanf("%i %i %i", &N, &M, &P);
  int m1[N][M];
  int m2[M][P];
  for(int i = 0; i < N; i++)
  {
    for(int j = 0; j < M; j++)
    {
      scanf("%i", &m1[i][j]);
    }
  }
  for(int i = 0; i < M; i++)
  {
    for(int j = 0; j < P; j++)
    {
      scanf("%i", &m2[i][j]);
    }
  }
  for(int i = 0; i < N; i++) // 0,1
  {
    for(int j = 0; j < P; j++) // 0,1,2,3
    {
      for(int k = 0; k < M; k++) // 0,1,2
      {
        temp += (m1[i][k]*m2[k][j]);
      }
      printf("%i", temp);
      if(j != P-1)
        printf(" ");
      temp = 0;
    }
    printf("\n");
  }
}
