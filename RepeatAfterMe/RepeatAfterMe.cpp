#include <iostream>
#include <vector>
using namespace std;

int main()
{
	try
	{
		cout << "This program will take inputs and repeat them.\nType 'done' (case sensitive) when you are done.\n";
		vector<string> v;
		for (string x; cin >> x;)
		{
			if (x == "done")
			{
				break;
			}
			v.push_back(x);
		}
		for (int i = 0; i < v.size(); i++)
		{
			cout << "\nItem " << i + 1 << " is " << v[i] << '\n';
		}
		system("pause");
		exit(0);
	}
	catch (out_of_range)
	{
		cerr << "A range error occurred. Re-open the program to try again.\n";
		return 1;
	}
	catch (...)
	{
		cerr << "An unknown error occurred. Re-open the program to try again.\n";
		return 2;
	}
}