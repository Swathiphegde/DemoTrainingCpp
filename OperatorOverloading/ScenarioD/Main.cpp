#include<iostream>
#include "VehicleType.h"
#include "Vehicle.h"
#include "Functionalities.h"
#include<memory>

int main(){
    Vehicle* vehicle[5];
    createObject(vehicle);

    
    AveragePrice(vehicle);

    minimumCarPrice(vehicle);


    

    //freeMemory(vehicle);
    
}