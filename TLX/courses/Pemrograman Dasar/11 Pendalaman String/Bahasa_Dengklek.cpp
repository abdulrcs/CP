#include <iostream>
#include <string>
using namespace std;
string s;
int main()
{
  cin >> s;
  for(int i = 0;i < s.length();i++)
  {
    if(s[i] >= 97) // ASCII A = 97
      s[i] -= 'a' - 'A';
    else if(s[i] <= 97) // ASCII a = 65
      s[i] += 'a' - 'A';
  }
  cout << s << endl;
}
