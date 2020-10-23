#include <bits/stdc++.h>
using namespace std;

string multiply(string s1, string s2)
{
   int x = s1.size();
   int y = s2.size();
   string ans(x + y, '0'); // declare ans string with x+y size

  for(int i = x - 1; i>=0; i--) // iterate through first string
  {
    for(int j = y - 1; j >= 0; j--) // iterate second string
    {
      int p = (s1[i] - '0') * (s2[j] - '0') + (ans[i + j + 1] - '0'); // product = int s1 x int s2 + carry
      ans[i+j+1] = p % 10 + '0'; // ans = last digit
      ans[i+j] += p / 10; // carry = product 
    }
  }
   for(int i = 0; i < y + x; i++)
   {
      if(ans[i] !='0')return ans.substr(i);
   }
   return "0";
}

string factorial(string n)
{
  if(n == "1")
    return "1";
  else
  {
    int temp = stoi(n) - 1;
    string prev = to_string(temp);
    return multiply(n, factorial(prev));
  }
}

main()
{
  int t;
  cin >> t;
  while(t--)
  {
    string n;
    cin >> n;
    cout << factorial(n) << endl;
  }
}
