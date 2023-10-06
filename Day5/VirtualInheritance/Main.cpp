#include<iostream>
#include "Employee.h"
#include "Director.h"
int main(){
    Director* d1=new Director(
        101,
        "Amith",
        16,
        "Bangalore",
        178363.0f
    );
    d1->calculateTax();//from Director
    //std::cout<<*d1<<std::endl;
    //std::cout<<"Budget is accesible ? "<<d1->Employee()::id(); //not possible because of upcasting Employee* d1=new Director()
    std::cout<<"Budget is accesible ? \n"<<d1->budget();
    std::cout<<"Name from employee : \n"<<d1->name();
    std::cout<<"id from employee : \n"<<d1->id();
    std::cout<<"TeamSSize from Manager : \n"<<d1->teamSize();
    std::cout<<"Location from Executive : \n"<<d1->location();

    std::cout<<"calculateTax from Manager : \n";
    d1->Manager::calculateTax();

    std::cout<<"calculateTax from Executive : \n";
    d1->Executive::calculateTax();

    std::cout<<"Director object\n";
    std::cout<<*d1;

    delete d1;
}