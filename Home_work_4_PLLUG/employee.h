#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>
#include "printable.h"

using namespace std;

#endif // EMPLOYEE_H
class Employee :public  Printable
{

public:
    Employee();
   void SetStudName(const string &studName);
   void setPhoneMumber(const string &Number);
   void setAdress(const string &homeAdress);

 void SetSalory(int salory);
void setStartYear(int startYear);
string GetStudName();
string GetPhoneNumber();
string GetHomeAdress();
double GetSalory();
int GetStartYear();
void print() const override
{
    cout<<StudName<<endl;
    cout<<PhoneNumber<<endl;
    cout<<homeAddress<<endl;
    cout<<salory<<endl;
    cout<<startYear<<endl;
}
private:
    string StudName;
    string PhoneNumber;
    string homeAddress;
    double  salory;
    int startYear;


};
