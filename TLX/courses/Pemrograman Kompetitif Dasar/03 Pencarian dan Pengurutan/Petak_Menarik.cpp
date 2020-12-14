#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main()
{
	vector<pair<int,int>> v;
	int n,m,k;
	cin >> n >> m >> k;
	int arr[n+2][m+2];
	for(int i = 0; i < n+2; i++)
		for(int j = 0; j < m+2; j++)
			arr[i][j] = 1;

	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= m; j++)
			cin >> arr[i][j];
	bool ketemu = false;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			int nilai = arr[i+1][j]*arr[i-1][j]*arr[i][j-1]*arr[i][j+1];
			if(nilai == k)
			{
				v.push_back(make_pair(j,i));
				ketemu = true;	
			}
		}
	}
	sort(v.begin(),v.end());
	if(ketemu)
		cout << v[0].second << " " << v[0].first << endl;
	else
		puts("0 0");
}