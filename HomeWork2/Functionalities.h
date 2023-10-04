#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include<iostream>
#include "Car.h"
#include "CarCateogry.h"

void createObject(Car* arr[3]);

float findAverageFuelCapacity(Car* arr[3]);

int findCountOfGivenBrand(Car* arr[3],CAR_CATEGORY type);

void findBestPassengerCar(Car* arr[3],CAR_CATEGORY type);

void freeMemory(Car* arr[3]);


#endif // FUNCTIONALITIES_H
