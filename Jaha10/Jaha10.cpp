// Jaha10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int main()
{
	int n, a[500][500];
	
	cin >> n;

	for (int i = 1; i <= n; ++i)
		for (int j = 1; j <= n; ++j)
			cin >> a[i][j];

	int sum = 0, psum = 0;
	for (int i = n; i >= 1; --i)
	{
		for (int j = 1; j <= n; ++j)
		{
			if (a[i][j] > 0) psum += a[i][j];
			sum += a[i][j];
		}
	}

	if (psum == 0)
	{
		cout << sum;
	}
	else
	{
		cout << psum;
	}

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
