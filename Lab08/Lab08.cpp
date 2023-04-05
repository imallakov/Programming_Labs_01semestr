// Lab08.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

vector<int> merge(vector<int> v)
{

	if (v.size() == 1)
	{
		return v;
	}

	vector<int>v1, v2;
	for (int i = 0; i < v.size()/2; ++i)
	{
		v1.push_back(v[i]);
	}
	for (int i = v.size() / 2; i < v.size(); ++i)
	{
		v2.push_back(v[i]);
	}

	v1 = merge(v1);
	v2 = merge(v2);
	
	vector<int>v3 = {};
	
	int i = 0, j = 0;
	while (i < v1.size() || j < v2.size())
	{
		if (i < v1.size() && j < v2.size())
		{
			if (v1[i] < v2[j])
			{
				v3.push_back(v1[i]);
				++i;
			}
			else
			{
				v3.push_back(v2[j]);
				++j;
			}
		}
		else
		{
			if (i < v1.size())
			{
				v3.push_back(v1[i]);
				++i;
			}
			else
			{
				if (j < v2.size())
				{
					v3.push_back(v2[j]);
					++j;
				}
				else
				{
					break;
				}
			}
		}
	}
	return v3;
}

int main()
{
	int n;
	cin >> n;
	vector<int>v;
	for (int i = 1; i <= n; ++i)
	{
		int a;
		cin >> a;
		v.push_back(a);
	}

	v = merge(v);

	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;
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
