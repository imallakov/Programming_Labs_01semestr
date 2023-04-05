// Lab03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double x, eps, k = 0, sum = 0, n = 2;
	cin >> x >> eps;
	sum = x; k = x;
	while (k > eps)
	{
		double l = 1;
		for (double i = 2; i <= n; ++i)
		{
			l *= 3 * i;
		}
		k = (l - 4) / l;
		double m = pow(-1, n - 1) * k * pow(x, n) * 1.0;
		//cout << sum << "  " << l - 4 << " / " << l << "  " << k << " " << m << endl;
		sum += m;
		++n;
	}
	cout << sum << endl;
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
