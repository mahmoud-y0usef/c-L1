#include <iostream>
using namespace std;

int main()
{

    /**
     * ||
     * &&
     * !
     */

     int x = 10 , d = 4;
     cout << (x == d || x !=d) << endl;
     cout << (x != d && x > d) << endl;
     cout << !(x > d) << endl;

    return 0;
}