#include <iostream>
using namespace std;

int ReadIntNumberInRange(int From, int To)
{
    int Number;

    do
    {
        cout << "Please enter a number between " << From << " and " << To << " : ";
        cin >> Number;
    } while (Number < From || Number > To);

    return Number;
}

int main()
{
    cout << "\n The Number is : " << ReadIntNumberInRange(18, 45);

    return 0;
}