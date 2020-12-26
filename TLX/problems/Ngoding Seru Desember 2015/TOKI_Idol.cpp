#include <iostream>
using namespace std;

int main()
{
	int x,y,z;
	cin >> x >> y >> z;
	if(x+y+z >= 200 && x >= 50 && y >= 50 && z >= 50)
		puts("Lolos");
	else
		puts("Tidak Lolos");
}