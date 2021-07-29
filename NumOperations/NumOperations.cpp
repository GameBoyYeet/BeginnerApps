#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

void invalidInput()
{
    cout << "Your input is invalid. Re-open the program to try again. ";
    system("pause");
    exit(1);
}

int main()
{
    double one;
    double two;
    double result;
    char operation; // Declare variables for later
    cout << "Enter two numbers, seperated by a space:\n";
    cin >> one >> two;
    if (!cin)
    {
        cout << "Something went wrong when taking inputs. This is most likely because the inputs aren't numbers. Re-open the program to try again.\n";
        system("pause");
        exit(1);
    }
    int mode = 10;
    cout << "This program can compare or do math on 2 numbers that you provided.\nWhat would you like to do?\nDo math on the numbers (0) or Compare the numbers (1): ";
    cin >> mode;
    if (mode == 0)
    {
        cout << "Would you like to add (+), subtract (-), multiply (*), or divide (/)?: ";
        cin >> operation;
        cout << '\n';
        switch (operation) 
        {
            case 43:
                result = one + two;
                cout << one << "+" << two << "=" << result << '\n';
                system("pause");
                exit(0);
                break;
            case 45:
                result = one - two;
                cout << one << "-" << two << "=" << result << '\n';
                system("pause");
                exit(0);
                break;
            case 42:
                result = one * two;
                cout << one << "*" << two << "=" << result << '\n';
                system("pause");
                exit(0);
                break;
            case 47:
                result = one / two;
                cout << one << "/" << two << "=" << result << '\n';
                system("pause");
                exit(0);
                break;
            default:
                invalidInput();
        }
            

    }
    else if (mode == 1)
    {
        if (one < two)
        {
            cout << one << " < " << two;
        }
        else if (one = two)
        {
            cout << one << " = " << two;
        }
        else if (one > two)
        {
            cout << one << " > " << two;
        }
    }
    else
    {
        invalidInput();
    }
}