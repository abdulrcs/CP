#include <iostream>
using namespace std;
int N;

void gunung(int N)
{
  if(N == 1)
  {
    cout << "*" << endl;
  }
  else
  {
    gunung(N-1);
    for(int i = 0; i < N; i++)
    {
      cout << "*";
    }
    cout << endl;
    gunung(N-1);
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin >> N;
  gunung(N);
}
