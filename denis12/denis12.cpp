// denis12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n = 0, m = 0, test[109][109];
	cin >> n >> m;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= m; ++j)
		{
			cin >> test[i][j];
		}
	}

	int sum = 0, max = 0;
	for (int i = 1; i <= n; ++i)
	{
		int l = 0;
		for (int j = 1; j <= m; ++j)
		{
			l += test[i][j];
		}
		if (l > max) max = l;
		sum += l;
	}
	double ans = sum / n;
	cout << ans << "  " << max - ans << endl;
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
