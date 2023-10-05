#include<iostream>
#include "Emloyee.h"
#include "Functionalities.h"
#include "Department.h"
#include "Project.h"
int main(){
    Emloyee* arr1[3]{};
    Project* arr2[3]{};
    try{
    createObject(arr1,arr2);
    Emloyee* emp=employeeWithHighestSalary(arr1);
    std::cout<<"\nEmp with hihest salary : "<<emp->salary();
    std::cout<<"\nCount of EMP in DEVELOPMENT"<<countEmployeeWithGivenDepartment(arr1,Departent::DEVELOPMENT);
    std::cout<<"\nAverage Budget : "<<averageBudget(arr2);
    }catch(std::runtime_error& er){
        std::cout<<er.what()<<std::endl;
    }
    freeMemory(arr1);


    
    
}