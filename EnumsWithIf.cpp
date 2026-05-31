#include <iostream>
using namespace std;

enum enCountry
{
    Jordan = 1,
    Tunisa = 2,
    Algeria = 3,
    Oman = 4,
    Egypt = 5,
    Iraq = 6,
    Other = 7
};

int main()
{
    cout << "******************************\n";
    cout << "Please Enter the number of your country ? \n";
    cout << "(1) Jordan\n";
    cout << "(2) Tunisa\n";
    cout << "(3) Algeria\n";
    cout << "(4) Oman\n";
    cout << "(5) Egypt\n";
    cout << "(6) Iraq\n";
    cout << "(7) Other\n";
    cout << "******************************\n\n";
    cout << "Your Choice? ";

    int c;
    enCountry Country;

    cin >> c;
    Country = (enCountry)c;

    if (Country == enCountry::Jordan)
    {
        cout << "Your Country is  Jordan\n";
    }
    else if (Country == enCountry::Tunisa)
    {
        cout << "Your Country is  Tunisa\n";
    }
    else if (Country == enCountry::Algeria)
    {
        cout << "Your Country is  Algeria\n";
    }
    else if (Country == enCountry::Oman)
    {
        cout << "Your Country is  Oman\n";
    }
    else if (Country == enCountry::Egypt)
    {
        cout << "Your Country is  Egypt\n";
    }
    else if (Country == enCountry::Iraq)
    {
        cout << "Your Country is  Iraq\n";
    }
    else
    {
        cout << "Your Country is  Other\n";

        return 0;
    }
}