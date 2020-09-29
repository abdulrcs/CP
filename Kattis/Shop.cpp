#include <bits/stdc++.h> 
typedef long long ll;
using namespace std;
int temp,N,total;
int main()
{
  cin >> N;
  vector<ll> v;
  for(int i = 0; i < N;i++)
  {
    cin >> temp;
    v.push_back(temp);
  }
  sort(v.begin(), v.end());
  int c = 0;
  for(int j = 0; j < N/3; j++)
  {
    total+=v.end()[-3-c];
    c+=3;
  }
  cout << total <<endl;
}
