#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<double> nums;
string currentNumText;
double currentNum;

int main()
{
	cout << "This program will find the mean of a set of numbers.\nEnter a list of numbers, seperated by 'Enter'. Type 'done' when you are done.\n";
	while (true)
	{
		cin >> currentNumText;
		if (currentNumText != "done") {
			currentNum = stod(currentNumText);
			nums.push_back(currentNum);
		}
		else
		{
			double sum = 0;
			for (int x : nums) sum += x;
			cout << "Mean: " << sum / nums.size() << '\n';
			system("pause");
			exit(0);
		}
	}
}
