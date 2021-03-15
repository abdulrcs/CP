#include <iostream>
using namespace std;

int main()
{
  int n; cin >> n;
  int fives = 0, zeros = 0;
  for (int i = 0; i < n; i++)
  {
    int x; cin >> x;
    if (x == 5) fives++;
    else if (x == 0) zeros++;
  }
  if (zeros == 0)
  {
    puts("-1");
  }
  else
  {
    while ((fives * 5) % 9 != 0)
    {
      fives--;
    }
    if (fives == 0)
    {
      puts("0");
    }
    else
    {
      for (int i = 0; i < fives; i++)
        cout << 5;
      for (int i = 0; i < zeros; i++)
        cout << 0;
    }
  }
}