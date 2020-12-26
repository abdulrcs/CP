#include <iostream>
#include <string>
using namespace std;

int FPB(int a, int b)
{
	if(b == 0)
		return a;
	else
		return FPB(b, a%b);
}

int main()
{
	int x,y; cin >> x >> y;
	int fpb = FPB(x,y);
	if(fpb == 1)
	{
		puts("Tidak");
	}
	else
	{
		cout << x/fpb << " " << y/fpb << endl;
	}
}