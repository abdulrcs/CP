#include <iostream>
#include <vector>
using namespace std;
int n;

int main()
{
  while(true)
  {
    cin >> n;
    vector<int> v;
    if(n == -1)
    {
      break;
    }
    else
    {
      int sum = 0;
      for(int i = 0; i < n; i++)
      {
        int x;
        cin >> x;
        sum+=x;
        v.push_back(x);
      }
      int avg = sum/n;
      if(avg*n==sum)
      {
        int ans = 0;
        for(int i = 0; i < n;i++)
        {
          int diff = avg-v[i];
          if(diff > 0)
          {
            ans+=diff;
          }
        }
        cout << ans << endl;
      }
      else
      {
        cout << -1 << endl;
      }
    }
  }
}
