#include "office.h"
#include <string>
#include <iostream>

string Office::GetAdress()
{
    return  this->m_adress;
}
int Office::GetCountEmployee()
{
    return this->m_countEmployee;
}

double Office::GetSquare()
{
    return this->m_square;
}
void Office::SetCountEmployee(int CountEmployee)
{
    this->m_countEmployee = CountEmployee;
}
void Office::SetSquare(double Square)
{
    this->m_square = Square;
}
void Office::SetAdress(string Adress)
{
    this->m_adress = Adress;
}
void Office:: SetName(string name)
{
    this->m_Name = name;
}
void Office :: print () const
{
    cout<<m_countEmployee<<endl;
    cout<<m_square<<endl;
    cout<<m_adress<<endl;
    cout<<m_Name<<endl;
}
