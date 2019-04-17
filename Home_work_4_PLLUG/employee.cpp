#include "employee.h"


Employee::Employee()
{
    salory = 0;

}
void Employee::setAdress(const string &homeAdress)
{
  this->homeAddress = homeAdress;

}
void Employee::SetStudName(const string &studName)
{
    this->StudName = studName;
}
void Employee ::setPhoneMumber(const string &Number)
{
    this->PhoneNumber = Number;
}
void Employee ::setStartYear(int startYear)
{
    this->startYear = startYear;
}
double  Employee::GetSalory()
{
    return this->salory;
}

string Employee::GetStudName(){
   return this->StudName;

}
int  Employee::GetStartYear()
{
    return this->startYear;
}
string  Employee::GetHomeAdress()
{
    return this->homeAddress;
}
