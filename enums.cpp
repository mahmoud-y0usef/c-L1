#include <iostream>
using namespace std;

enum Color {Red , Green , Blue , Black};
int main()
{

    Color Mycolor;
    Mycolor = Color::Black;

    cout << "My color is " << Mycolor << endl;


    return 0;
}