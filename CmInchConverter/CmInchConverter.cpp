// CmInchConverter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    constexpr double cm_per_inch = 2.54;
    double length;
    char unit;
    cout << "This program can convert centimeters to inches and vice versa.\nEnter a length followed by a unit (c or i)\n";
    cin >> length >> unit;
    switch (unit)
    {
    case 'c':
        cout << length << "cm = " << length / cm_per_inch << "in\n";
        system("pause");
        break;
    case 'i':
        cout << length << "in = " << length * cm_per_inch << "cm\n";
        system("pause");
        break;
    default:
        cout << "Sorry, I don't know a unit called " << unit << ". Re-open the program to try again.\n";
        system("pause");
        break;
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
