#include <iostream>
#include <vector>
using namespace std;
#define fo(i,n) for(int i = 0; i < n; i++)
#define deb(x) cout << #x << "=" << x << endl;
#define deb2(x,y) cout << #x << "=" << x << "," << #y << "=" << y << endl;
typedef long long ll;

int main()
{
	int n; cin >> n;
	int arr[7];
	fo(i, 7)
	cin >> arr[i];
	bool last = false;
	int day = 0;
	while (!last)
	{
		fo(i, 7)
		{
			n -= arr[i];
			if (n <= 0)
			{
				last = true;
				day = i + 1;
				break;
			}
		}
	}
	cout << day << endl;
}