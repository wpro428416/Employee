#include "Employee.h"

Employee::Employee(string name,char sex)
{
    this->name=name;
    this->sex=sex;
    this->level=0;
}

Employee::~Employee(){}

void Employee::setLevel(int level){
    this->level=level;
}

string Employee::getName(){
    return name;
}

char Employee::getSex(){
    return sex;
}

int Employee::getLevel(){
    return level;
}

int Employee::cal_salary(){
    return level*1000;
}
