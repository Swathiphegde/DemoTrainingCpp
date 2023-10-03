
#include<iostream>
#include "Vehicle.h"
#include "VehicleType.h"
#include "Car.h"
#include "Functionalities.h"
int main(){
    Car* arr[3];
    
    createObjct(arr);

    std::cout<<"Average price : "<<averagePrice(arr)<<std::endl;

    calculateTax(arr);

    freeMemory(arr);
}