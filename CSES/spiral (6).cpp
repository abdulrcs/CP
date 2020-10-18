#include <iostream>
using namespace std;
long long t,y,x,row,col;
// lots of math arithmetic series formula here lol
void solve()
{
  row,col = 1;
  cin >> y >> x;
  if(y & 1) // if row odd
  {
    long long n = y / 2 + 1; // align index for series formula
    row = 4*n*n-8*n+5; // two tier arithmetic series for odd
    if(x <= y-1) // if this, and y is odd, its a increasing pattern from row until y-1
    {
      cout << row+x-1 << endl; 
    }
    else // then it's a increasing/decreasing pattern from column
    {
      if(x & 1) // if odd its decreasing
      {
        long long n = x / 2 + 1;
        col = 4*n*n-4*n+1;
        cout << col-y+1 << endl;
      }
      else // if even its increasing
      {
        long long n = x/2;
        col = 4*n*n-4*n+2;
        cout << col+y-1 << endl;
      }
    }
  }
  else // if row even
  {
    long long n = y/2; // align index for series formula
    row = 4*n*n; // two tier arithmetic series for even
    if(x <= y-1) // if even, its a decreasing pattern from row until y-1
    {
      cout << row-x+1 << endl; 
    }
    else
    {
      if(x & 1) // if odd its decreasing
      {
        long long n = x / 2 + 1;
        col = 4*n*n-4*n+1;
        cout << col-y+1 << endl;
      }
      else // if even its increasing
      {
        long long n = x/2;
        col = 4*n*n-4*n+2;
        cout << col+y-1 << endl;
      }
    }
  }
}

int main()
{
  cin >> t;
  while(t--) solve();
}
