#include <iostream>
using namespace std;
typedef long long ll;
void solve()
{
  ll N,K,D;
  cin >> N >> K >> D;
  int problems = 0;
  for(int i = 0; i < N; i++)
  {
    int x; cin >> x;
    problems+=x;
  }
  if(problems < K)
    cout << 0 << endl;
  else if(problems/K > D)
    cout << D << endl;
  else
    cout << problems/K << endl;
}

int main()
{
  int t; cin >> t;
  while(t--)
    solve();
}