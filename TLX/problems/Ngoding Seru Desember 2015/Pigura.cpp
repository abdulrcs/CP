#include <iostream>
using namespace std;

int main()
{
	int n,d;
	char c;
	cin >> n >> c >> d;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i == 0 || i == n-1)
			{
				cout << d;
			}
			else
			{
				if(j == 0 || j == n-1)
					cout << d;
				else if(n & 1 && i == n/2 && j == n/2)
				{
					cout << '*';
				}
				else
					cout << c;
			}
		}
		cout << endl;
	}
}