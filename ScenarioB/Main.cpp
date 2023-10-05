
#include<iostream>
#include "Vehicle.h"
#include "VehicleType.h"
#include "Car.h"
#include "Functionalities.h"

/*
    Vehicle class(1 pure virtual method calculateTax()
        -Inherited by Car class (must override pure virtual method)
    
*/

int main(){
    Car* arr[3];
    
    createObjct(arr);

    std::cout<<"Average price : "<<averagePrice(arr)<<std::endl;

    calculateTax(arr);

    freeMemory(arr);
}