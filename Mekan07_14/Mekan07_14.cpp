// Mekan07_14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int main()
{
	int n, a[35], b[35], k = 0;
	cin >> n;
	
	for (int i = 1; i <= n; ++i)
		cin >> a[i];

	double summa = 0, nechet = 0;
	for (int i = 1; i <= n; ++i)
	{
		if (a[i] % 2 == 0)
		{
			b[++k] = a[i];
		}
		else
		{
			nechet += a[i];
		}
		summa += a[i];
	}
	cout << nechet / (summa / 100) <<"%" << endl;

	for (int i = 1; i <= k; ++i)
		cout << b[i] << " ";
	cout << endl;

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
