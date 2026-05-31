#include <iostream>
using namespace std;


enum enColor {Blue , Red , Orange , Black};
enum enGender {Male , Female};
enum enMaritalStatues {Single , Married};


struct stAddress
{
    string StreetName , BuildingNo , PoBox , ZipCode;
};

struct stContactInfo
{
    string Phone , Email;
    stAddress Adress;
};

struct stPerson
{
    string FirstName , LastName;
    stContactInfo ContactInfo;

    enMaritalStatues MaritalStatues;
    enGender Gender;
    enColor Color;
};



int main()
{
    stPerson Person1;

    Person1.FirstName = "Mahmoud";
    Person1.LastName = "Yousef";
    Person1.ContactInfo.Email = "mahmoudyousef59@outlook.com";
    Person1.ContactInfo.Adress.PoBox = "777777";
    Person1.ContactInfo.Adress.ZipCode = "11114";
    Person1.ContactInfo.Adress.StreetName = "Queen1 Street";
    Person1.ContactInfo.Adress.BuildingNo = "313";


    Person1.Gender = enGender::Male;
    Person1.Color = enColor::Black;
    Person1.MaritalStatues = enMaritalStatues::Single;
    return 0;
}