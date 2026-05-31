#include <iostream>
using namespace std;

struct strInfo
{
    string FirstName , LastName , Phone;
    int Age;

};

void ReadInfo(strInfo& Info)
{
    cout << "Enter Your First Name : ";
    cin >> Info.FirstName;
    cout << "Enter Your Second Name : ";
    cin >> Info.LastName;
    cout << "Enter Your Phone Number : ";
    cin >> Info.Phone;
    cout << "Enter Your Age : ";
    cin >> Info.Age;
}

void PrintInfo(strInfo Info)
{
    cout << Info.FirstName << endl;
    cout << Info.LastName << endl;
    cout << Info.Phone << endl;
    cout << Info.Age << endl;
}

void ReadPersonsInfo(strInfo Person[2])
{
    ReadInfo(Person[0]);
    ReadInfo(Person[1]);
}

void PrintPersonInfo(strInfo Person[2])
{
    PrintInfo(Person[0]);
    PrintInfo(Person[1]);
}

int main()
{

    strInfo Person[2];
    ReadPersonsInfo(Person);
    PrintPersonInfo(Person);


    return 0;
}