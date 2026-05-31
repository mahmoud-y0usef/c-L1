#include <iostream>
using namespace std;

int main()
{
    int day;
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Sunday";
        break;
    case 2:
        cout << "Monday";
    default:
        cout << "Not a weekday";
        break;
    }

    return 0;
}