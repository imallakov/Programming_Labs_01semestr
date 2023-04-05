// Lab07.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>

using namespace std;

void sort(int a[], int n)
{
    for (int i = 1; i < n; ++i)
    {
        for (int j = i + 1; j <= n; ++j)
        {
            if (a[i] < a[j])
            {
                int k = a[i];
                a[i] = a[j];
                a[j] = k;
            }
        }
    }
}

int main()
{
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<int> dist6(-100, 100);

    int n, a[1009], b[1009], c[2018];
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        a[i] = dist6(rng);
        b[i] = dist6(rng);
    }


    cout << "array A:\n";
    for (int i = 1; i <= n; ++i)
        cout << a[i] << " ";
    cout << endl;
    cout << "array B:\n";
    for (int i = 1; i <= n; ++i)
        cout << b[i] << " ";
    cout << endl;


    sort(a, n);
    sort(b, n);

    cout << "sorted array A:\n";
    for (int i = 1; i <= n; ++i)
        cout << a[i] << " ";
    cout << endl;
    cout << "sorted array B:\n";
    for (int i = 1; i <= n; ++i)
        cout << b[i] << " ";
    cout << endl;

    int i = 1, j = 1, k = 0;
    while (i <= n || j <= n)
    {
        if ((i <= n && a[i] > b[j]) || (j > n))
        {
            c[++k] = a[i];
            ++i;
        }
        else
        {
            c[++k] = b[j];
            ++j;
            if (j > n && i > n) break;
        }
    }

    cout << "array C:\n";
    for (int i = 1; i <= k; ++i)
        cout << c[i] << " ";
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
