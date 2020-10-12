#include <iostream>
#include <string>
using namespace std;
string s;
int a = 1;
int b,c;

void tukar(int&x, int&y)
{
  int temp = x;
  x = y;
  y = temp;
}

int main()
{
  cin >> s;
  for(char&x: s)
  {
    if(x == 'A')
    {
      tukar(a,b);
    }
    else if(x == 'B')
    {
      tukar(b,c);
    }
    else if(x == 'C')
    {
      tukar(a,c);
    }
  }
  if(a == 1)
    cout << 1;
  else if(b == 1)
    cout << 2;
  else if(c == 1)
    cout << 3;
  cout << endl;
}
