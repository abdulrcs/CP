#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
using namespace std;
#define fo(i,n) for(int i = 0; i < n; i++)
#define deb(x) cout << #x << "=" << x << endl;
#define deb2(x,y) cout << #x << "=" << x << "," << #y << "=" << y << endl;
#define pb push_back
#define mp make_pair
#define F first
#define S second
typedef long long ll;

int main()
{
	int m,n; cin >> m >> n;
	int m1[n][n],m2[n][n],mh[n][n];
	int mv[n][n], mka[n][n], mki[n][n];
	fo(i,n)
	{
		fo(j,n)
		{
			 cin >> m1[i][j];
			 // horizontal
			 mh[n-1-i][j] = m1[i][j];
			 // vertikal
			 mv[i][n-1-j] = m1[i][j];
			 // diag kanan bawah
			 mka[j][i] = m1[i][j];
			 // diag kiri bawah
			 mki[n-1-j][n-1-i] = m1[i][j];
		}
	}
	cin >> m >> n;
	int a=0,b=0,c=0,d=0,e=0;
	fo(i,n)
	{
		fo(j,n)
		{
			cin >> m2[i][j];
			if(m2[i][j] == m1[i][j]) a++;
			if(m2[i][j] == mh[i][j]) b++;
			if(m2[i][j] == mv[i][j]) c++;
			if(m2[i][j] == mka[i][j]) d++;
			if(m2[i][j] == mki[i][j]) e++;
		}
	}
	if(a == n*n) puts("identik");
	else if(b == n*n) puts("horisontal");
	else if(c == n*n) puts("vertikal");
	else if(d == n*n) puts("diagonal kanan bawah");
	else if(e == n*n) puts("diagonal kiri bawah");
	else puts("tidak identik");

}