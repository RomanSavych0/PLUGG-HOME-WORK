#ifndef OFFICE_H
#define OFFICE_H
#include <string>
#include "printable.h"

using namespace std;
#endif // OFFICE_H
class  Office :public Printable
{
string m_Name;
    string m_adress;
   double  m_square;
    int m_countEmployee;

public:
     Office () {}
     void SetName(string name);
    void SetAdress(string Adress);
  void SetSquare(double Square );
  void SetCountEmployee(int countEmployee);
  string  GetAdress();
double  GetSquare();
int GetCountEmployee();
void print() const override;
};
