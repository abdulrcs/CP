#include <iostream>
#include <string>
#include <regex>
using namespace std;
int main() 
{ 
  string cek;cin >> cek;
  string front = "", back ="";
  bool mid = false;
  for(char c: cek)
  {
    if(c == '*')
      mid = true;
    else if(!mid)
      front+=c;
    else if(mid && c != '*')
      back+=c;
  }
  regex b(front+"(.*)"+back);
  int n; cin >> n;
  while(n--)
  {
    string a; cin >> a;
    if(regex_match(a,b)) cout << a << endl;
  }
} 
