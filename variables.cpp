/*
    int
    char
    float
    bool
    string

    type VariableName = value;
*/

#include <iostream>
using namespace std;

int main()
{   
    int age = 26;
    char letter = 'M';
    float temp = 10.2;
    bool graduated = true;
    string name = "Mahmoud Yousef";
    
    cout << "My name is : "  << name << "\n";
    cout << "i'm : "  << age << "year's old" << "\n";
    cout << "Start Letter : "  << "\"" << letter << "\"" << "\n";
    cout << "the tempreture degree is : "  << temp << "c'" << "\n";

    return 0;
}