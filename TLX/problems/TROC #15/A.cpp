#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define fo(i,n) for(i=0;i<n;i++)
typedef long long ll;
typedef long double ld;
int main()
{
  int n,i,j;
  int check = -1;
  string s;
  cin >> n;
  fo(i,n)
  {
    int x,first;
    if(i == 0)
    {
      cin >> first;
      s+=first+'0';
    }
    else
    {
      cin >> x;
      if(first == x && (check == -1 || check == 0)) //equal
      {
        check = 0;
      }
      else if(first < x && (check == -1 || check == 1)) // decrease
      {
        check = 1;
      }
      else if(first > x && (check == -1 || check == 2)) // increase
      {
        check = 2;
      }
      else
      {
        check = 3;
        break;
      }
      s+=x+'0';
    }
  }
  if(check == 0)
    puts("EQUAL");
  else if(check == 1)
    puts("NONDECREASING");
  else if(check == 2)
    puts("NONINCREASING");
  else if(s.length() == 1)
    puts("EQUAL");
  else if(check == 3)
    puts("NONE");
}