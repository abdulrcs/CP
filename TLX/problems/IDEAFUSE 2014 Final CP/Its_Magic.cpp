#include <iostream>
using namespace std;

int main()
{
	int k,n; cin >> k >> n;
	puts("Think of a number, any number");
	cout << "Multiply it by " << k << endl;
	cout << "Add " << k*n << " to your number" << endl;
	cout << "Now, divide your total by " << k << endl;
	puts("Finally, subtract the result from the first number you pick");
	puts("BRAVO!!!");
	cout << "Your answer is " << n << endl;
}