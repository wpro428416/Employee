#include "Sale_Employee.h"

Sale_Employee::Sale_Employee(string name,char sex):Employee(name,sex)
{
    this->name=name;
    this->sex=sex;
    this->level=0;
    this->sum=0;
}

Sale_Employee::~Sale_Employee(){}

void Sale_Employee::setSaleCount(int sum){
    this->sum=sum;
}

int Sale_Employee::cal_salary(){

    return level*1000+sum/10;
}
