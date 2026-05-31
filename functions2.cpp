#include <iostream>
using namespace std;

struct strInfo
{
    string FirstName , LastName , Phone;
    int Age;
};


void ReadInfo(strInfo &Info)
{
    cout << "Please Enter Your First Name : ";
    cin >> Info.FirstName;
    cout << "Please Enter Your Last Name : ";
    cin >> Info.LastName;
    cout << "Please Enter Your Phone Number : ";
    cin >> Info.Phone;
    cout << "Please Enter Your Age : ";
    cin >> Info.Age;
}

void PrintInfo(strInfo Info)
{
    cout << "First Name: " << Info.FirstName << endl;
    cout << "Last Name: " << Info.LastName << endl;
    cout << "Phone: " << Info.Phone << endl;
    cout << "Age: " << Info.Age << endl;
    
}

int main()
{

    strInfo PersonalInfo;
    ReadInfo(PersonalInfo);
    PrintInfo(PersonalInfo);

    return 0;
}