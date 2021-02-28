#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
typedef long long ll;
/*

 "You know the areas of its
 three faces that have a common vertex"

 So basically, x y z is = a*b, b*c, a*c
 It has common vertex.

 You do some algebra to get each element.

 And you multiply by 4 because each "line"
 in rectangle has 4

*/
int main()
{
	ll x, y, z;
	cin >> x >> y >> z;
	ll a = sqrt(x * z / y) * 4;
	ll b = sqrt(y * x / z) * 4;
	ll c = sqrt(z * y / x) * 4;
	cout << a + b + c << endl;
}