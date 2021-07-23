#include <iostream>
using namespace std;
int main()
{
    cout << "This program will convert miles to kilometers.\nEnter an amount of miles.\n";
    double km;
    double mi;
    cin >> km;
    mi = km * 1.609;
    cout << km << " kilometers to miles = " << mi << '\n';
    system("pause");
}
