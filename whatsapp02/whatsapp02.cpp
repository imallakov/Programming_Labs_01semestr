// whatsapp02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int main()
{
	int x, y;
	cin >> x >> y;
	double circle = sqrt((1 - 1) * (1 - 1) + (5 - 0) * (5 - 0));
	double circle1 = sqrt((x - 1) * (x - 1) + (y - 0) * (y - 0));
	bool in = false;
	if (circle1 < circle)
	{
		if ((x <= 0 && y >= 0) || (y <= 0 && x >= 0) || (y >= 6 - x))
		{
			in = true;
		}
	}
	else
	{
		if ((x >= 0 && y >= 0 && y <= 6 - x) || (x <= 0 && y <= 0 && y >= (-1 * x - 6)))
		{
			in = true;
		}
	}
	if (in) cout << "true" << endl;
	else cout << "false";
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
