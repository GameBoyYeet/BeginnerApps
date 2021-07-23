// SquareListGenerator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "This program will generate a list of squares within the range that you choose.\nEnter the highest number that you want squared.\n";
    int i = 0;
    double high;
    {
        cout << "The lowest possible power is 2. Re-open the program to try again.\n";
        system("pause");
        exit(EXIT_FAILURE);
    }
    while (i <= high)
    {
        cout << i << '\t' << pow(i,2) << '\n';
        i++;
    }
    system("pause");
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
