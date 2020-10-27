#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  while(true)
  {
    cin >> n;
    if(n==0)
      break;
    // Tiered arithmetic progression formula (it's 4 tiered)
    cout << 1+(4*n-4)+(5*n-5)*(n-2)/2+(2*n-2)*(n-2)*(n-3)/6 << endl;
  }
}
