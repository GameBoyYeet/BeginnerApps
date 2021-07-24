#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    vector<string> words;
    cout << "This program will repeat all of the words you provide, but will not use them more than once.\n";
    for (string temp; cin >> temp;)
    {
        words.push_back(temp);
        cout << "Number of words: " << words.size() << '\n';
        sort(words.begin(), words.end());
        for (int i = 0; i < words.size(); i++)
        {
            if (i == 0 || words[i-1] != words[i])
            {
                cout << words[i] << '\n';
            }
        }
    }
}
