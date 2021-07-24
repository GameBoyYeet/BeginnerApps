#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void invalidInput()
{
    cout << "Your input is invalid. Re-open the program to try again.\n";
    system("pause");
    exit(0);
}

int main()
{
    int operation = 10;
    cout << "This program can compare or do math on 2 numbers that you provide.\nWhat would you like to do?\nDo math on the numbers (0) or Compare the numbers (1)\n";
    cin >> operation;
    if (operation == 0)
    {
        double one;
        double two;
        double result;
        cout << "Enter two numbers, seperated by a space:\n";
        cin >> one >> two;
        cout << '\n';
        char operation;
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
        }
            

    }
    else if (operation == 1)
    {

    }
    else
    {
        invalidInput();
    }
}