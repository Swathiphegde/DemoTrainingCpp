#ifndef VEHICLE_H
#define VEHICLE_H
#include<iostream>
#include "VehicleType.h"
class Vehicle
{
private:
    std::string _id;
    std::string _brand;
    float _price;
    VehicleType _type;
public:
    Vehicle()=delete;

    Vehicle(const Vehicle&)=default;
    
    Vehicle(
    std::string id,
    std::string brand,
    float price,
    VehicleType type);

    Vehicle(
    std::string id,
    std::string brand,
    VehicleType type);
    virtual ~Vehicle() {
        std::cout<<"\nVehicle with ID : "<<_id<<" deleted";
    }

    virtual void calculateTax()=0;

    std::string id() const { return _id; }

    std::string brand() const { return _brand; }

    float price() const { return _price; }

    VehicleType type() const { return _type; }
};

#endif // VEHICLE_H
