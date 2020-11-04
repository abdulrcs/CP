#include <iostream>
#include <string>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define fo(i,n) for(i=0;i<n;i++)
typedef long long ll;

int main()
{
  int n,count = 0;
  string s;
  cin >> n;
  cin >> s;
  for(int i = 1; i < n; i++)
  {
    if(s[i] == s[i-1])
      count++;
  }
  cout << count << endl;
}
