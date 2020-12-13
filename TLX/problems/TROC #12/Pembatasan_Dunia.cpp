#include <iostream>
using namespace std;

int main()
{
	int a,x;
	cin >> a >> x;
	int maj = x/a;
	int netim = x%a;
	cout << maj << " " << netim << endl;
}