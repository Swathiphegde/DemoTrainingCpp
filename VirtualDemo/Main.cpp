#include<iostream>
#include "Employee.h"
#include "Manager.h"

int main(){
    Employee* arr[2];
    //Upcasting
    arr[0]=new Employee();
    arr[1]=new Manager();;

    //both calls parent's method
    arr[0]->applyForLeave();
    arr[1]->applyForLeave();

    //before implementing virtual method in child class-->both calls parent's method
    arr[0]->payTax();
    arr[1]->payTax();
    //after implementing virtual method in child class-->respective class methods are called

    //Both call the Employee version of the Display() because Manager(child) doesnot have Display() method
    arr[0]->Display();
    arr[1]->Display();

    delete arr[0];
    delete arr[1];
}