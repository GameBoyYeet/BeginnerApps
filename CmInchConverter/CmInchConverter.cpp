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