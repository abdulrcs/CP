#include <iostream>
using namespace std;

int main()
{
	int x[3];
	cin >> x[0] >> x[1] >> x[2];
	for(int i = 0; i < 2; i++)
		for(int j = 0; j < 2-i; j++)
		{
			if(x[j] > x[j+1])
			{
				int temp = x[j+1];
				x[j+1] = x[j];
				x[j] = temp;
			}
		}
	cout << x[0] << " " << x[2] << " " << x[1] << endl;
}