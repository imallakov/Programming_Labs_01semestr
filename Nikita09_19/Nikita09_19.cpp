// Nikita09_19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int main()
{
	int n, a[109][109], d;
	cout << "Enter n and d: ";
	cin >> n >> d;
	cout << "Enter an array with size n*n:\n";
	for (int i = 1; i <= n; ++i)
		for (int j = 1; j <= n; ++j)
			cin >> a[i][j];

	int i = n, j = 1, ki = -1, kj = -1;
	while (i >= 1 && j <= n)
	{
		if (abs(a[i][j]) <= d && ki == -1 && kj == -1)
		{
			ki = i;
			kj = j;
		}
		j++;
		if (j == n + 1)
		{
			--i;
			j = 1;
		}
	}
	if (ki == -1)
	{
		int b[250], l = 0;
		for (int j = 1; j <= n; ++j)
		{
			for (int i = 1; i <= n; ++i)
			{
				if (i >= j && j >= n - i + 1)
				{
					b[++l] = a[i][j];
				}
			}
		}
		for (int i = 1; i <= l; ++i)
			cout << b[i] << " ";
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
