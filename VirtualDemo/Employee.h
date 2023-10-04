#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<iostream>
class Employee
{
private:
    /* data */
public:
    Employee()=default;
    void applyForLeave(){
        std::cout<<"Employee applies for leave\n";
    }
    virtual void payTax(){
        std::cout<<"Employee's paytax()\n";
    }
    void Display(){
        std::cout<<"Displaying employee\n";
    }
    virtual ~Employee() {
        std::cout<<"Employee object destroyed\n";
    }
};

#endif // EMPLOYEE_H
