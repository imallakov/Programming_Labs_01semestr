// whatsapp09.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <random>

using namespace std;

int main()
{
    int k = 0;
    while (k != 1 && k != 2)
    {
        cout << "Encrypt(1) or Decrypt(2)? type 1 or 2: ";
        cin >> k;
    }
    string s;
    cout << "Enter message: \n";
    cin >> s;
    int gamma;


    if (k == 1)
    {
        std::random_device dev;
        std::mt19937 rng(dev());
        std::uniform_int_distribution<std::mt19937::result_type> dist6(127, 255); // distribution in range [1, 6]

        gamma = dist6(rng);
        std::cout << "Gamma = " << gamma << std::endl;
        for (int i = 0; i < s.length(); ++i)
        {
            int l = int(s[i]) ^ gamma;
            s[i] = char(l);
        }
        cout << "Encrypted message : " << s << endl;
    }
    else
    {
        cout << "Enter gamma: \n";
        cin >> gamma;
        for (int i = 0; i < s.length(); ++i)
        {
            int l = int(s[i]) ^ gamma;
            s[i] = char(l);
        }
        cout << "Decrypted message : " << s << endl;
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
