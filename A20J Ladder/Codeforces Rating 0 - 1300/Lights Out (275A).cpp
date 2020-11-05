#include <iostream>
#include <string>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define fo(i,n) for(i=1;i<=n;i++)
typedef long long ll;
 
int main()
{
  int i,j,k;
  int a[5][5] = {0};
  fo(i,3)
    fo(j,3)
      cin >> a[i][j];
  fo(i,3)
  {
    fo(j,3)
      cout<<1-((a[i][j]+a[i+1][j]+a[i-1][j]+a[i][j-1]+a[i][j+1]))%2;
		cout<<endl;
  }
}