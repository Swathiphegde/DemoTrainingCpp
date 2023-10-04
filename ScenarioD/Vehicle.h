#ifndef VEHICLE_H
#define VEHICLE_H
#include<iostream>
#include "VehicleType.h"
class Vehicle
{
private:
    std::string  _id;
    std::string _brand;
    float _price;
    VehicleType _type;


public:
    Vehicle() =delete;  //default constructor is disabled
    Vehicle(const Vehicle&)=default;
    Vehicle(std::string  id,
    std::string brand,
    float price,
    VehicleType type);
    ~Vehicle() {
        std::cout<<"\nVhicle with id : "
                <<_id
                <<" is deleted";
    }

    float calculateTax();
    float calculateTax(float ax_percent);
    float calculateTx(float cgst,float sgst);




    std::string id() const { return _id; }

    std::string brand() const { return _brand; }

    float price() const { return _price; }

    VehicleType type() const { return _type; }

    friend std::ostream &operator<<(std::ostream &os, const Vehicle &rhs);
};
std::string DisplayEnum(const VehicleType val);

#endif // VEHICLE_H
