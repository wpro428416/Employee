#ifndef SALE_EMPLOYEE_H_INCLUDED
#define SALE_EMPLOYEE_H_INCLUDED

#include "Employee.h"
#include <string>
using std::string;
class Sale_Employee:public Employee
{
public:
    Sale_Employee(string name,char sex);
    ~Sale_Employee();
    void setSaleCount(int sum);
    int cal_salary();
private:
    int sum;
};


#endif // SALE_EMPLOYEE_H_INCLUDED
