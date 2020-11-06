#include <iostream>
#include <string>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define fo(i,n) for(i=0;i<n;i++)
typedef long long ll;
int main()
{
  string s;
  cin >> s;
  cout << (char)toupper(s[0]);
  s.erase(0,1);
  cout << s << endl;
}