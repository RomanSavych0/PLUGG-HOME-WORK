#include <iostream>
#include <vector>
#include "printable.h"
#include "employee.h"
#include "office.h"

void printList(const std::vector<Printable *> listToPrint)
{
    for (auto item: listToPrint)
    {
        item->print();
        std::cout << std::endl;
    }
}

int main()
{
    Employee a;
    a.SetStudName("Petya");
Office b;
b.SetAdress("Pasichna");

b.SetSquare(120.3);
b.SetCountEmployee(18);

    std::vector<Printable *> employeesToPrint;
    employeesToPrint.push_back(&a);
    printList(employeesToPrint);

    std::cout << std::endl;
    std::vector<Printable *> officesToPrint;

    printList(officesToPrint);

    return 0;
}
