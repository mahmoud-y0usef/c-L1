#include <iostream>
using namespace std;

void ReadArrayData(int x[3])
{
    cout << "Enter Number1: " ;
    cin >> x[0];
    cout << "Enter Number2: " ;
    cin >> x[1];
    cout << "Enter Number3: " ;
    cin >> x[2];
}
void PrintArrayData(int x[3])
{
    cout << x[0] << endl;
    cout << x[1] << endl;
    cout << x[2] << endl;
}

int main()
{
    int x[3];
    ReadArrayData(x);
    PrintArrayData(x);
    return 0;
}