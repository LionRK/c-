#include <iostream>
using namespace std;
enum enGender
{
    male = 1, famle
};
enum enMarried
{
    single, married
};
struct stAdress
{
    string city;
    string country;
    string road;
};
struct stContactInfo
{
    int phone;
    string gmail;
    string facebook;
    stAdress adress;

};
struct stSalary
{
    int monthly;
    int yearly;
};
struct ID
{
    string name;
    unsigned short age;
    stSalary salary;
    stContactInfo contactInfo;
    short gander;
    int isMarried;
    enGender Gender;
    enMarried married;
    
};

int main()
{
    ID data;

    cout << "Enter your name: ";
    cin >> data.name;
    cout << "\nEnter your age: ";
    cin >> data.age;
    cout << "\nEnter your city: ";
    cin >> data.contactInfo.adress.city;
    cout << "\nEnter your country: ";
    cin >> data.contactInfo.adress.country;
    cout << endl << "Enter your road: ";
    cin >> data.contactInfo.adress.road;
    cout << "\nEnter your monthly salary: ";
    cin >> data.salary.monthly;
    data.salary.yearly = data.salary.monthly * 12;
    cout << "\nEnter your gender(1 for male and 2 for famle): ";
    cin >> data.gander;
    data.Gender = (enGender)data.gander;
    cout << "\nYou is married(0 for single and 1 for married): ";
    cin >> data.isMarried ;
    data.married = (enMarried)data.isMarried;
    cout << endl << "Enter your fhone number: ";
    cin >> data.contactInfo.phone;
    cout << "\nEnter your gmail: ";
    cin >> data.contactInfo.gmail;
    cout << "\nEnter your facebook: ";
    cin >> data.contactInfo.facebook;
    cout << endl;

    cout << "******************************\n";
    cout << "Name : " << data.name << "\n";
    cout << "Age : " << data.age << "\n";
    cout << "City : " << data.contactInfo.adress.city << endl;
    cout << "Country : " << data.contactInfo.adress.country << "\n";
    cout << "Road : " << data.contactInfo.adress.road << "\n";
    cout << "Monthly Salary : " << data.salary.monthly << "\n";
    cout << "Yearly Salary : " << data.salary.yearly << endl;
    cout << "Phone number : 0" << data.contactInfo.phone << "\n";
    cout << "Gmail : " << data.contactInfo.gmail << "\n";
    cout << "Facebook : " << data.contactInfo.facebook << endl;
    cout << "Gender : " << data.Gender << "\n";
    cout << "Married : " << data.isMarried << "\n";
    cout << "******************************\n";


    return 0;
}
