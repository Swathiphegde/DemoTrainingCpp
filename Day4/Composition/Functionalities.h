#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Emloyee.h"
#include "Project.h"
/*
Create 3 objects of Project in an array.
Create 3 project of Employees in a seperate array.
Link one Project to one Employee

In: 2 arrays (one for Employees),(second for Project)
out: void
*/
void createObject(Emloyee* arr1[3],Project* arr2[3]);


/*
A function to return pointer to the Employee with the highest salary
*/
Emloyee* employeeWithHighestSalary(Emloyee* arr1[3]);


/*
A funtion to return count of all Employees in the array whose _dept value matches with the secon param passed to
tis function
*/
int countEmployeeWithGivenDepartment(Emloyee* arr1[3],Departent dept);


/*
Find the average _budget for all projects
*/
float averageBudget(Project* arr1[3]);

void freeMemory(Emloyee *arr1[3]);


/*

*/

#endif // FUNCTIONALITIES_H
