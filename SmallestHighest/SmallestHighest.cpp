#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	double one;
	double two;
	cout << "This program will tell you which number is the smallest and highest.\nEnter two numbers seperated by spaces:\n";
	cin >> one >> two;
	vector<double> nums;
	nums.push_back(one);
	nums.push_back(two);
	sort(nums.begin(), nums.end());
	cout << "Lowest: " << nums.at(0) << ", Highest: " << nums.at(1) << '\n';
	system("pause");
}