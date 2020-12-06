#include <iostream>
using namespace std;
typedef long long ll;
ll FPB(ll a, ll b)
{
	if(b == 0)
		return a;
	else
	{
		return FPB(b, a%b);
	}
}

int main()
{
	ll A,B,C,D;
	cin >> A >> B >> C >> D;

	ll AB = FPB(A,B);
	A/=AB; B/=AB;
	ll CD = FPB(C,D);
	C/=CD; D/=CD;

	ll E = A*D + B*C, F = B*D;
	ll factor = FPB(E,F);
	E/=factor; F/=factor;

	cout << E << ' ' << F << endl;
}