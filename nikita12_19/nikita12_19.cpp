// nikita12_19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

struct meal
{
	string name = "";
	int price = 0;
	int kal = 0;
};

int main()
{
	int n;
	meal a[1009];
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i].name >> a[i].price >> a[i].kal;
	}

	int maxp = 1, minp = 1, maxk = 1;
	for (int i = 1; i <= n; ++i)
	{
		if (a[i].price > a[maxp].price) maxp = i;
		if (a[i].price < a[minp].price) minp = i;
		if (a[i].kal > a[maxk].kal) maxk = i;
	}
	cout << "samoe dorogoe blyudo:  " << a[maxp].name << "  price=" << a[maxp].price << endl;
	cout << "samoe deshewoe blyudo:  " << a[minp].name << "  price=" << a[minp].price << endl;
	cout << "samoe kaloriynoe blyudo:  " << a[maxk].name << "  kal=" << a[maxk].kal << endl;

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
