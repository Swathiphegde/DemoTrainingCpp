#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include<iostream>
#include "Customer.h"
#include "CustomerType.h"

//to create 3 objects of customer class
void createObject(Customer* arr[5]);

/*
A function to find and return a container of Customer objects whose customerType
matches the type passed as the second argument.
*/
Customer** findCustomer(Customer* arr[5],CustomerType type);

/*
A function to return a container of all Customer instances whose customerStoreCredits
are between 100 and 200 (both values included).
*/
Customer** creditScores(Customer* arr[5]);

/*
A function to find the average customerStoreCredits of all customers whose customer
type matches the type provided as the second argument.
*/
float averageStoreCredits(Customer* arr[5],CustomerType type);

void freeMemory(Customer* arr[5]);

#endif // FUNCTIONALITIES_H
