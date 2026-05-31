#include <iostream>
using namespace std;

struct strInfo
{
    string Name , Phone;
    int Age;
};

void ReadInfo(strInfo &Info)
{
    cout << "Enter Your Name: ";
    cin.ignore(1 , '\n');
    cin >> Info.Name;
    cout << "Enter Your Phone Number: "; 
    cin >> Info.Phone;
    cout << "Enter Your Age: ";
    cin >> Info.Age;
}

void PrintInfo(strInfo Info)
{
    cout << "Name : " << Info.Name;
    cout << "Phone : " << Info.Phone;
    cout << "Age : " << Info.Age;
}

void ReadPersonsInfo(strInfo Persons[100] , int& numbersOfPersons)
{
    cout << "How Many Persons > 1 : 100 ? ";
    cin >> numbersOfPersons;
    for (int i = 0; i < numbersOfPersons; i++)
    {
        cout << "Please Enter Person's [" << i+1 << "] Info: \n" ;
        ReadInfo(Persons[i]);

    }
    
}
void PrintPersonsInfo(strInfo Persons[100] , int numbersOfPersons)
{
    
    for (int i = 0; i < numbersOfPersons; i++)
    {
        cout << " Person's [" << i+1 << "] Info: \n" ;
        PrintInfo(Persons[i]);

    }
    
}
int main()
{
    strInfo Persons[100];
    int Length = 1;
    ReadPersonsInfo(Persons , Length);
    PrintPersonsInfo(Persons , Length);


    return 0;
}