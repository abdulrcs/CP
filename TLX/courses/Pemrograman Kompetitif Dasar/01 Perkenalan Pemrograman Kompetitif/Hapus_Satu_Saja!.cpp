#include <iostream>
#include <string>
using namespace std;
int main()
{
  string a,b;
  cin >> a >> b; bool bisa = false;
  for(int i = 0; i < a.length(); i++)
  {
    string temp = a;
    if(temp.erase(i,1) == b){bisa = true;break;}
  }
  cout << (bisa ? "Tentu saja bisa!" : "Wah, tidak bisa :(") << endl;
}
