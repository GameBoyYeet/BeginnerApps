#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
vector<double> nums;
string currentNumText;
double currentNum;

int case_insensitive_match(string s1, string s2) {
	//convert s1 and s2 into lower case strings
	transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
	transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
	if (s1.compare(s2) == 0)
		return 1; //The strings are same
	return 0; //not matched
}

int main()
{
	cout << "This program will find the mean of a set of numbers.\nEnter a list of numbers, seperated by 'Enter'. Type 'done' when you are done.\n";
	while (true)
	{
		cin >> currentNumText;
		if (!case_insensitive_match(currentNumText, "done")) // if the most recent input isn't "done"
		{
			currentNum = stod(currentNumText); // Convert to double
			nums.push_back(currentNum); // Add to vector (list)
		}
		else
		{
			double sum = 0;
			for (int x : nums) 
			sum += x;
			cout << "Mean: " << sum / nums.size() << '\n'; // Calc and display the mean
			system("pause");
			exit(0);
		}
	}
}
