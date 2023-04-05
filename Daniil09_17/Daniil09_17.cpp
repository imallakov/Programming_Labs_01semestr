// Daniil09_17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int main()
{
	int n, a[109][109];
	cin >> n;

	for (int i = 1; i <= n; ++i)
		for (int j = 1; j <= n; ++j)
			cin >> a[i][j];

	int i = 1, j = n, ki = -1, kj = -1;
	while (i < n && j <= n)
	{
		if (a[i][j] % 2 != 0 && a[i][j] < 0)
		{
			ki = i;
			kj = j;
		}
		--j;
		if (j == i)
		{
			++i;
			j = n;
		}
	}
	if (ki == -1)
	{
		int b[215], l = 0;
		i = 2, j = 1;
		while (i <= n && j < n)
		{
			b[++l] = a[i][j];
			++i;
			if (i == n + 1)
			{
				++j;
				i = j + 1;
			}
		}
		for (int i = 1; i <= l; ++i)
		{
			cout << b[i] << " ";
		}
		cout << endl;
	}
	else
	{
		cout << ki << " " << kj << endl;
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
