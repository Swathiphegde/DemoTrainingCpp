#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include<iostream>
#include "Car.h"
#include "Vehicle.h"
#include "VehicleType.h"
#include "CarType.h"
#define SIZE 3

void CreateVehicle(Vehicle *arr[SIZE]);

void averagePrice(Vehicle *arr[SIZE]);

void calculateTax(Vehicle *arr[SIZE]);

void freeMemory(Vehicle *arr[3]);

#endif // FUNCTIONALITIES_H
