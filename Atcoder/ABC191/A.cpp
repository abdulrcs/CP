#include <iostream>
#include <set>
using namespace std;
int main()
{
  int v,t,s,d;
  cin >> v >> t >> s >> d;
  // If D is between the invisible then no.
  cout << ((v * t <= d && d <= v * s) ? "No" : "Yes") << endl;
}