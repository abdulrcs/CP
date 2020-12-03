#include <iostream>
#include <algorithm>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define fo(i,n) for(i=0;i<n;i++)
typedef long long ll;

int main()
{
  cout.precision(14);
  int n;
  cin >> n;
  double frac = 0;
  for(int i = 0; i < n; i++)
  {
    double x;
    cin >> x;
    frac+=x;
  }
  printf("%.12lf\n", (frac/(n*100))*100);
}
