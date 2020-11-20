#include <iostream>
#include <string>
using namespace std;
int N;
string s;
string konversi(int x)
{
  if(x == 0)
    return s;
  else if(x % 2 == 0)
  {
    s.insert(0,"0");
    x/=2;
    return konversi(x);
  }
  else if(x % 2 != 0)
  {
    s.insert(0,"1");
    x/=2;
    return konversi(x);
  }
}

int main()
{
  cin >> N;
  cout << konversi(N) << endl;
}
