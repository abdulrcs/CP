#include <bits/stdc++.h>
using namespace std;
int N;
int main()
{
  cin >> N;
  vector<int> v(N);
  vector<int> p(N);
  iota(v.begin(), v.end(), 1);
  if(N <= 3 && N != 1)
  {
    cout << "NO SOLUTION" << endl;
  }
  else if(N == 4)
  {
    cout << "3 1 4 2" << endl;
  }
  else
  {
    for(int i = 0; i < N; i+=2)
    {
      cout << v[i] << " ";
    }
    for(int j = 1; j < N; j+=2)
    {
      cout << v[j] << " ";
    }
      cout << endl;
  }
}
