#include <bits/stdc++.h>
using namespace std;
int N,D;

int dekat(int xj, int xi, int yj, int yi, int d)
{
  return( pow(abs(xj-xi),d) + pow(abs(yj-yi),d) );
}

int main()
{
  scanf("%i %i", &N, &D);
  int x[N];
  int y[N];
  vector<int> arr;
  for(int i = 0; i < N; i++)
  {
    scanf("%i %i", &x[i], &y[i]);
  }
  for(int i = 0; i < N;i++)
  {
    for(int j = 0; j < N;j++)
    {
      if(j != i)
        arr.push_back(dekat(x[j],x[i],y[j],y[i],D));
    }
  }
  sort(arr.begin(), arr.end());
  cout << arr[0] << " " << arr.back() << endl;
}
