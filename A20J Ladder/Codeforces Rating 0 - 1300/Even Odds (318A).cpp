#include <iostream>
using namespace std;
typedef long long ll;
// quick refresher on binary shifting
// n >> 1 is divide by 2
// n << 1 is multiply by 2
int main()
{
	ll n, k;
	cin >> n >> k;
	// if odd plus one on the half, else just divide by 2
	ll half = (n & 1 ? (n >> 1) + 1 : n >> 1);
	if (k > half)
	{
		cout << ((k - half) << 1) << endl;
	}
	else
	{
		cout << (k << 1) - 1 << endl;
	}
}
