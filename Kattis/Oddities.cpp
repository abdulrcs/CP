// https://open.kattis.com/problems/oddities
#include <iostream>
using namespace std;
int N,x;
int main()
{
  cin >> N;
  for(int i = 0; i < N; i++)
  {
    cin >> x;
    if(x % 2 == 0)
      cout << x << " " << "is even" << endl;
    else
      cout << x << " " << "is odd" << endl;
  }
}
