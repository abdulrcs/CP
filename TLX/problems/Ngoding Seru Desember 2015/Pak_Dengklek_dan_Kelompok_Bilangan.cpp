#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n; cin >> n;
	int positif[n],negatif[n],nol[n];
	int po=0,ne=0,no=0;
	for(int i = 0; i < n; i++)
	{
		int x; cin >> x;
		if(x > 0)
		{
			positif[po] = x;
			po++;
		}
		else if(x < 0)
		{
			negatif[ne] = x;
			ne++;
		}
		else
		{
			nol[no] = x; 
			no++;
		}
	}
	for(int i = 0; i < ne; i++)
		cout << negatif[i] << endl;
	for(int i = 0; i < no; i++)
		cout << nol[i] << endl;
	for(int i = 0; i < po; i++)
		cout << positif[i] << endl;
}