#include <iostream>
#include <string>
using namespace std;
string s;
int main()
{
  cin >> s;
  int maks = 0;
  int counter = 0;
  for(int i = 0; i < s.length(); i++)
  {
    if(i == 0)
    {
      counter++;
      maks++;
    }
    else
    {
      if(s[i-1] == s[i])
      {
        counter++;
        maks = max(maks, counter);
      }
      else
      {
        maks = max(maks, counter);
        counter = 1;
      }
    }
  }
  cout << maks << endl;

}
