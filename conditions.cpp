#include <iostream>
using namespace std;

int main()
{

    int Time, x;
    cin >> x;
    if (x > 5 && x < 20)
    {
        if (Time > 10)
        {
            cout << "Good Morning";
        }
    }
    else if (Time < 20)
    {
        cout << "Good Day";
    }
    else
    {
        cout << "Good evening";
    }

    return 0;
}
