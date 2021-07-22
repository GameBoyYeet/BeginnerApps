#include <iostream>
using namespace std;

int main()
{
    cout << "This program will generate a basic letter.\nEnter the name of the person you would like to write to:\n";
    string friendName;
    cin >> friendName;
    cout << "How old is your friend?\n";
    int age;
    cin >> age;
    if (age < 0 or age > 110) // Checks if age is unrealistic
    {
        cout << "The age that you entered is impossible. Re-open the program to try again.\n";
        system("pause");
        exit(EXIT_FAILURE);
    }
    cout << "What's your name?\n";
    string myName;
    cin >> myName;
    cout << "Your letter:\n\n";
    cout << "Dear " << friendName << ",\nIt's nice to see you again! "; // Opening
    if (age < 17)
    {
        cout << "Next year, you'll be " << age + 1 << ", mark my words, you'll be an adult before you know it!";
    }
    else if (age == 17)
    {
        cout << "Next year, you'll be an adult! Time flies, huh? Have fun exploring the outside world!";
    }
    else if (age > 30 and age < 70) 
    {
        cout << "How are you doing? Is life going well for you? Have fun enjoying the rest of your life! I hope to see you soon.";
    }
    cout << "\n\nSincerely,\n" << myName << '\n' << '\n';
    system("pause");
}
