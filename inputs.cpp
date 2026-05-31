#include <iostream>

using namespace std;

int main()
{
    string name;
    int age;
    char letter;

    cout << "What's Your First Name : " << endl;
    cin >> name;
    letter = name[0];
    cout << "How Old are You : " << endl;
    cin >> age;
    cout << "Good Morning " << name << "Your Age Is " << age << " Year's Old" << "and Your First letter Is " << letter << endl;
    return 0;
}