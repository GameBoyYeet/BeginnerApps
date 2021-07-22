#include <iostream>
using namespace std;

int main() {
	int wordCount = 0;
	string previous = "";
	string current;
	while (cin >> current)
	{
		wordCount++;
		if (previous == current)
		{
			cout << "word number: " << wordCount << "repeated: " << current << '\n';
			previous = current;
		}
	}
}