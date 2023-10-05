#ifndef FUCTIONALITIES_H
#define FUCTIONALITIES_H
#include "vehicle.h"
//Function to create 3 objects on the heap
void createObject(Vehicle* container[3]);

//function to create average price of all objects
float averagePrice(Vehicle* container[3]);

void freeMemory(Vehicle* arr[3]);

#endif // FUCTIONALITIES_H
