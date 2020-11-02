#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define fo(i,n) for(i=0;i<n;i++)
typedef long long ll;
typedef long double ld;

int lattice(int r) 
{ 
    if (r <= 0) 
        return 0;  
    int result = 4; 
    for (int x=1; x<r; x++) 
    { 
        int ySquare = r*r - x*x; 
        int y = sqrt(ySquare); 
        if (y*y == ySquare) 
            result += 4; 
    } 
    return result; 
} 

int main()
{
  int N,check = -1;
  cin >> N;
  if (N>4)
  {
    for(int i = N; N >= 0; i--)
    {
      if(lattice(i) == 12)
      {
        check = i;
        break;
      }
      else
        continue;
    }
    if(check != -1)
    {
      cout << check << endl;
    }
    else
    {
      cout << -1 << endl;
    }
  }
  else
    cout << -1 << endl;
}