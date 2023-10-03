#ifndef BIKE_H
#define BIKE_H
#include "BikeType.h"
#include "Vehicle.h"
#include "VehicleType.h"
#include<iostream>
class Bike : public Vehicle
{
private:
   float _bike_milage;
   BikeType _bike_type;
public:
    Bike(std::string id,std::string brand,float price,VehicleType type,float milage,BikeType btype);
    Bike(std::string id,std::string brand,VehicleType type,float milage,BikeType btype);
    float calculateTax() override;
    ~Bike() {
        std::cout<<"Bike part of vehicle with ID : "
        <<id()
        <<" deleted\n";
    }

    friend std::ostream &operator<<(std::ostream &os, const Bike &rhs);
    
};
std::string DisplayEnum(const BikeType val);
#endif // BIKE_H
