#include <iostream>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define fo(i,n) for(i=0;i<n;i++)
typedef long long ll;

int main()
{
  int m[5][5],row,column,i,j;
  fo(i, 5)
    fo(j, 5)
      cin >> m[i][j];
  fo(i, 5)
  {
    fo(j,5)
    {
      if(m[i][j] == 1)
      {
        row = i+1;
        column = j+1;
        break;
      }
    }
  }
  cout << abs(row-3)+abs(column-3) << endl;
}
