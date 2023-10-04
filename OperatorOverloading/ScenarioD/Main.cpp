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

    Vehicle v1("101","ttt",99383)
    

    //freeMemory(vehicle);
    
}