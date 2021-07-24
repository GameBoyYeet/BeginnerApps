#include <iostream>
using namespace std;

int main()
{
	
	constexpr double km_in_mi = 1.609;
	double num;
	double result;
	char unit;
	cout << "This program can convert kilometers to miles and vice versa.\nEnter a number followed by a unit (k or m)\n";
	cin >> num >> unit;
	switch (unit)
	{
		case 'k':
			result = num / 1.609;
			cout << num << " kilometers is approx. " << result << " miles\n";
			system("pause");
			exit(0);
			break;
		case 'm':
			result = num * 1.609;
			cout << num << " miles is approx. " << result << "kilometers\n";
			break;
		default:
			if (num == 0)
			{
				cout << "You didn't provide a number or your number was 0. Re-open the program to try again\n";
				system("pause");
				exit(0);
			}
			else
			{
				cout << "Your unit, " << unit << " is not valid. Re-open the program to try again.\n";
				system("pause");
				exit(0);
			}
			break;
	}
}