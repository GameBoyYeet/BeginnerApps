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
	if (!cin)
	{
		cout << "Something went wrong when taking inputs. This is most likely because you didn't provide the correct types of values. Re-open the program to try again.\n";
		system("pause");
		exit(1);
	}
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