#include <iostream>
#include <algorithm>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define fo(i,n) for(i=0;i<n;i++)
typedef long long ll;

void swap(int&a, int&b)
{
  int temp = a;
  a = b;
  b = temp;
}

int main()
{
  int n,i,pmaks,pmini,maks = 0,mini = 101;
  cin >> n;
  int arr[n];
  fo(i,n)
  {
    cin >> arr[i];
    maks = max(maks,arr[i]);
    mini = min(mini,arr[i]);
  }
  for(int i = n-1; i >= 0; i--)
  {
    if(arr[i] == mini)
    {
      pmini = i;
      break;
    }
  }
  for(int i = 0; i < n; i++)
  {
    if(arr[i] == maks)
    {
      pmaks = i;
      break;
    }
  }
  if(arr[0] == maks && arr[n-1] == mini)
  {
    cout << 0 << endl;
    return 0;
  }
  if(pmini < pmaks)
    cout << ((n-1)-pmini+pmaks)-1 << endl;
  else
    cout << ((n-1)-pmini+pmaks) << endl;
}
