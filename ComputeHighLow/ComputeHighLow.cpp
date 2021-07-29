#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<double> nums;
class cin_fail {};

void program()
{
    try
    {
        cout << "This program will compute the lowest and highest number in a set of numbers that you provide.\nEnter some numbers (one number per line) and type 'done' when you are done.\n> ";
        for (string x; cin >> x; cout << "> ")
        {
            if (x == "done")
            {
                break;
            }
            nums.push_back(stod(x));
        }
        sort(nums.begin(), nums.end());
        double low = nums.at(0);
        double high = nums.at(nums.size() - 1);
        cout << "Low: " << low << ", High: " << high;
    }
    catch (...)
    {
        cout << "An error occurred. This is most likely because you did not provide a valid value.\n";
        throw cin_fail{};
    }
}

int main()
{
    try
    {
        
        program();
    }
    catch (cin_fail)
    {
        program();
    }
    catch (...)
    {
        program();
    }
}