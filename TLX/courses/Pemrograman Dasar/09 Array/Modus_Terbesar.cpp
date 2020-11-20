#include <cstdio>
#include <algorithm>
using namespace std;
int N = 0;
int main()
{
  scanf("%i", &N);
  long long num[N];
  for(int i = 0; i < N; i++)
  {
    scanf("%lld", &num[i]);
  }
  int n = sizeof(num)/sizeof(num[0]);
  sort(num, num+n);
  int number = num[0]; //https://stackoverflow.com/questions/19920542/c-calculating-the-mode-of-a-sorted-array
  int mode = number;
  int count = 1;
  int countMode = 1;
  for (int i=1; i<N; i++)
  {
    if (i == N-1 && num[i] > mode) 
    {
      count++;
      if(count > countMode)
        mode = num[i];
      else if(count == countMode)
      {
        if(num[i] > mode)
        {
          mode = num[i];
        }
      }
    }
    else if (num[i] == number)
    {
      ++count;
    }
    else
    {
      if (count > countMode) 
      {
            countMode = count;
            mode = number;
      }
      else if(count == countMode) // jika modus sama, cek jika angka lebih besar, pilih modus yang angka lebih besar.
      {
        if(num[i] > mode)
        {
          mode = num[i-1];
        }
      }
      count = 1;
      number = num[i];
    }
  }
  printf("%i\n", mode);
}
