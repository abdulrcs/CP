#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
string s;
int K;
int main() {
  cin >> s;
  cin >> K;
  for (int i = 0; i < s.length(); i++)
  {
    int ord = (s[i] - 'a');
    int encrypted = (ord + K) % 26;
    s[i] = encrypted + 'a';
  }
  cout << s << endl;
}
