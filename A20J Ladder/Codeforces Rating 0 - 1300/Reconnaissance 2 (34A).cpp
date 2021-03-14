#include <bits/stdc++.h>
using namespace std;
/*
  Reverse Polish Notation / Postfix Notation
  Reference: https://www.youtube.com/watch?v=vXPL6UavUeA
*/
void solve()
{
  string s;
  stack<char> symbol;
  string postfix = "";
  cin >> s;
  for (char c : s)
  {
    if (c > 96 && c < 123) // add to postfix if alphabet (operand)
    {
      postfix += c;
    }
    else // else is symbol (operator)
    {
      if (c == '(')
        symbol.push(c);
      else if (c == ')')
      {
        while (symbol.top() != '(')
        {
          postfix += symbol.top();
          symbol.pop();
        }
        symbol.pop();
      }
      else
      {
        char prev = symbol.top();
        if ((prev == '^' && c != '^') || prev == c)
        {
          postfix += prev;
          symbol.pop();
          symbol.push(c);
        }
        else if ((prev == '*' || prev == '/') && (c == '+' || c == '-' || prev == c))
        {
          postfix += prev;
          symbol.pop();
          symbol.push(c);
        }
        else
        {
          symbol.push(c);
        }
      }
    }
  }
  while (!symbol.empty())
  {
    postfix += symbol.top();
    symbol.pop();
  }
  cout << postfix << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--) solve();
}