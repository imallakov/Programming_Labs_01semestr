// nikita_kr_7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int p(int x)
{
	const int a3 = 1;
	const int a2 = 1;
	const int a1 = 1;
	const int a0 = 1;
	return a3 * x * x * x + a2 * x * x + a1 * x + a0;
}

int q(int x)
{
	return p(x + 1) + p(x);
}

int main()
{
	for (int i = 1; i <= 5; ++i)
	{
		cout << q(i) << endl;
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
