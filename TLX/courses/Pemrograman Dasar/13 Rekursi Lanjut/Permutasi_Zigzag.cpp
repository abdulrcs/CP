#include <iostream>
using namespace std;
bool pernah[1001];
int catat[1001];
bool zigzag;
int N;
void tulis(int kedalaman) 
{
  if(kedalaman >= N)
  {
    zigzag = true;
    for(int i = 1; i < N-1; i++)
    {
      if(!((catat[i]>catat[i-1] && catat[i]>catat[i+1]) || (catat[i]<catat[i-1] && catat[i]<catat[i+1])))
      {
        zigzag = false;
      }
    }
    if(zigzag)
    {
      for(int i = 0; i < N; i++)
      {
        cout << catat[i];
      }
      cout << endl;
    }
  }
  else
  {
    for(int i = 1; i <= N; i++)
    {
      if(!pernah[i])
      {
        pernah[i] = true;
        catat[kedalaman] = i;
        tulis(kedalaman+1);
        pernah[i] = false;
      }
    }
  }
}

int main()
{
  cin >> N;
  tulis(0);
}
