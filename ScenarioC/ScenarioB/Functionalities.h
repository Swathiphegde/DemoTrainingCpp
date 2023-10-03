#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include "Car.h"
#include "Bike.h"
//Create car object and store it in array
void createObjct(Vehicle* arr[3]);

//Average price
float averagePrice(Vehicle* arr[3]);

//Calculate tax for each car
void calculateTax(Vehicle* arr[3]);

//delete allocated heap memory
void freeMemory(Vehicle* arr[3]);

#endif // FUNCTIONALITIES_H
