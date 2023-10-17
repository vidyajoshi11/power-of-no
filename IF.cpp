#include <iostream>
using namespace std;

int power(int x, int n)
{
	// If x^0 return 1
	if (n == 0)
		return 1;
	// If we need to find of 0^y
	if (x == 0)
		return 0;
	// For all other cases
	return x * power(x, n - 1);
}

// Driver Code
int main()
{
	int x = 2;
	int n = 3;

	// Function call
	cout << (power(x, n));
}


