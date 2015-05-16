#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED

#include <string>
using std::string;
class Employee
{
public:
    Employee(string name,char sex);
    ~Employee();
    void setLevel(int level);
    string getName();
    char getSex();
    int getLevel();
    int cal_salary();
protected:
    string name;
    char sex;
    int level;
};


#endif // EMPLOYEE_H_INCLUDED
