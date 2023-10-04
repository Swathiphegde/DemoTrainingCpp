#ifndef MANAGER_H
#define MANAGER_H
#include<iostream>
#include "Employee.h"

class Manager:public Employee
{
private:
    /* data */
public:
    Manager() =default;
    void applyForLeave(){
        std::cout<<"Manager applied fr leave\n";
    }
    void payTax(){
        std::cout<<"Manager's paytax()\n";
    }
    // void Display(){
    //     std::cout<<"Displaying Manager";
    // }
    ~Manager() {
        std::cout<<"Manager object destroyed";
    }
};

#endif // MANAGER_H
