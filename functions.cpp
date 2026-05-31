#include <iostream>
using namespace std;

string message(string message)
{
    return message;
}

string input(string firstName, string secondName)
{
    cout << message("Enter Your First Name : ");
    cin >> firstName;
    cout << message("Enter Your Second Name : ");
    cin >> secondName;

    return firstName + " " + secondName;
}

string output(string input)
{

    return input;
}
int main()
{
    string firstName, secondName;
    cout << output(input(firstName, secondName)) << endl;

    return 0;
}