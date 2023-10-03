#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include "Car.h"
//Create car object and store it in array
void createObjct(Car* arr[3]);

//Average price
float averagePrice(Car* arr[3]);

//Calculate tax for each car
void calculateTax(Car* arr[3]);

//delete allocated heap memory
void freeMemory(Car* arr[3]);

#endif // FUNCTIONALITIES_H
