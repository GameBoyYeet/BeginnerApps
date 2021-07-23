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
                    break;
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