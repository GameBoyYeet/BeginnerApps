// SquareListGenerator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "This program will generate a list of squares or square roots within the range that you choose.\nWould you like to generate a list of squares (s) or square roots? (r)\n";
    char mode;
    cin >> mode;
    double highestSquare; // highest square
    double highestRoot; // highest sqrt
    switch (mode) {
    case 's':
        cout << "Enter the highest number that you want squared. (no decimals!)\n";
        cin >> highestSquare;
        highestSquare++;
        if (highestSquare >= 50000)
        {
            char confirm = ' ';
            cout << "50,000+ squares will take a significant amount of time. Do you want to proceed? (y/n)\n";
            cin >> confirm;
            switch (confirm) {
                case 'y':
                    for (int i = 0; i <= highestSquare; i++)
                    {
                        cout << i << '\t' << pow(i, 2) << '\n';
                        i++;
                    }
                default:
                    system("pause");
                    exit(0);
            }
        }
        else
        {
            for (int i = 0; i <= highestSquare; i++)
            {
                cout << i << '\t' << pow(i, 2) << '\n';
                i++;
            }
        }
        
        break;
    case 'r':
        cout << "Enter the highest number that you want the square root of. (no decimals!)\n";
        cin >> highestRoot;
        highestRoot++;
        if (highestRoot >= 50000) 
        {
            char confirm = ' ';
            cout << "50,000+ square roots will take a significant amount of time. Do you want to proceed? (y/n)\n";
            switch (confirm) 
            {
                case 'y':
                    for (int i = 0; i <= highestRoot; i++)
                    {
                        cout << i << '\t' << sqrt(i) << '\n';
                    }
                    system("pause");
                    exit(0);
                    break;
            }
        }
        else
        {
            for (int i = 0; i <= highestRoot; i++)
            {
                cout << i << '\t' << sqrt(i) << '\n';
            }
            system("pause");
            exit(0);
        }
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
