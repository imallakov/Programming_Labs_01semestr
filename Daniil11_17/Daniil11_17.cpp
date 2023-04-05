// Daniil11_17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int main()
{
	int n, m, x[109], y[109], a[109], b[109], c[109], p[109];
	cout << "Enter the amount of points (n): ";
	cin >> n;
	cout << "Enter the coordinates of " << n << " points (x and y):\n";
	for (int i = 1; i <= n; ++i) cin >> x[i] >> y[i];
	cout << "Enter the amount of lines (m): ";
	cin >> m;
	cout << "Ax+By+C=0 - equation of line on the plane\n";
	cout << "Enter the coordinates of lines (A,B and C):\n";
	for (int i = 1; i <= m; ++i) cin >> a[i] >> b[i] >> c[i];

	for (int i = 1; i <= m; ++i)
	{
		for (int j = i + 1; j <= m; ++j)
		{
			if ((1.0 * (a[i] / a[j])) == (1.0 * (b[i] / b[j])))
			{
				++p[i];
				++p[j];
			}
		}
	}
	int max = 1;
	for (int i = 2; i <= m; ++i)
	{
		if (p[i] > p[max]) max = i;
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
