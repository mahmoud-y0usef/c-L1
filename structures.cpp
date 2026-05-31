#include <iostream>
using namespace std;

struct student
{
    string name;
    int age;
    float grade;
};

int main()
{

    student s;
    s.name = "mahmoud yousef";
    s.age = 26;
    s.grade = 88.6;

    cout << s.name << endl;
    cout << s.age << endl;
    cout << s.grade << endl;


    return 0;
}