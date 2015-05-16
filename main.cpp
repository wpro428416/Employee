#include <iostream>
#include "Employee.h"
#include "Sale_Employee.h"
/*
Salary of Employee: salary = level*1000;
Salary of Sale_Employee: salary = level*1000+saleCount/10;
*/
using namespace std;

int main(){

    Employee * worker1 = new Employee("Zhang San",'M');
    worker1->setLevel(8);

    cout<<"NAME: "<<worker1->getName()
        <<"\nSEX: "<<worker1->getSex()
        <<"\nLEVEL: "<<worker1->getLevel()
        <<"\nSALARY: "<<worker1->cal_salary()
        <<"\n"<<endl;

    Sale_Employee * worker2 = new Sale_Employee("Liu Mengmeng",'F');
    worker2->setLevel(9);
    worker2->setSaleCount(12345);

    cout<<"NAME: "<<worker2->getName()
        <<"\nSEX: "<<worker2->getSex()
        <<"\nLEVEL: "<<worker2->getLevel()
        <<"\nSALARY: "<<worker2->cal_salary()
        <<"\n"<<endl;

    return 0;
}
