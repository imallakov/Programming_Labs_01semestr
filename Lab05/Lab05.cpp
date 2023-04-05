// Lab05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int main()
{
	int n, a[1009], k = 0;
	cin >> n;

	while (n > 0)
	{
		a[++k] = n % 10;
		n /= 10;
	}
	int l = 0, m = 0;
	for (int i = k; i > 0; --i)
	{
		if (i % 2 == 0) l += a[i];
		else m += a[i];
	}
	cout << m - l;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
