#include <iostream>
#include <string>
using namespace std;
string s;
string palindrome(string& s)
{
  if(s.length() <= 1)
    return "YA";
  else if(s[0] != s[s.length()-1])
    return "BUKAN";
  else
  {
    s.erase(0,1);
    s.erase(s.length()-1,1);
    return palindrome(s);
  }
}
int main()
{
  cin >> s;
  cout << palindrome(s) << endl;
}
