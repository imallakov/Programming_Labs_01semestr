// Lab09.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int main()
{
	int n, k, a[109][109];
	cin >> n >> k;

	for (int i = 1; i <= n; ++i)
		for (int j = 1; j <= n; ++j)
			cin >> a[i][j];

	int i = 1, j = n - 1;
	while (i <= n && j >= 1)
	{
		if (a[i][j] < 0)
		{
			--k;
			if (k == 0)
			{
				cout << i << " " << j << endl;
				break;
			}
		}
		if (j < n && i < n)
		{
			++i;
			++j;
		}
		else
		{
			if (i < j)
			{
				j = n - i;
				i = 1;
			}
			else
			{
				i = i - j + 2;
				j = 1;
			}
		}
		if (i == n && j == 1) break;
	}
	if (k > 0)
	{
		for (int i = 1; i <= n / 2; ++i)
		{
			for (int j = 1; j <= n; ++j)
			{
				a[n - i + 1][j] = a[i][j];
			}
		}
		for (int i = 1; i <= n ; ++i)
		{
			for (int j = 1; j <= n; ++j)
			{
				cout << a[i][j] << " ";
			}
			cout << endl;
		}

	}
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
