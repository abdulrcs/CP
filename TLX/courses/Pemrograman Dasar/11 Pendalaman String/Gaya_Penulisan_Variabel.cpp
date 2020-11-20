#include <iostream>
#include <string>
using namespace std;
string s;
int main()
{
  cin >> s;
  for(int i = 0;i < s.length();i++)
  {
    if(s[i] < 97 && s[i] != '_')
    {
      s[i] += 'a' - 'A';
      s.insert(i,"_");
    }
    else if(s[i] == '_')
    {
      s.erase(i,1);
      s[i] -= 'a' - 'A';
    }
  }
  cout << s << endl;
}
