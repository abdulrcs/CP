#include <iostream>
#include <string>
using namespace std;
int p,x;
string S;
string T;
int main()
{
  cin >> S >> T;
  p = S.find(T);
  x = T.length();
  while(p != -1)
  {
    S.erase(p, x);
    p = S.find(T);
  }
  if(S.length() > 0)
    cout << S << endl;
}
