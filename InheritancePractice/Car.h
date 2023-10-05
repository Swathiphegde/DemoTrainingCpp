#ifndef CAR_H
#define CAR_H
#include<iostream>
#include "Vehicle.h"
#include "CarType.h"

class Car:public Vehicle
{
private:
    CarType _car_type;
public:
    Car()=delete;

    Car(const Car&)=default;

    Car(std::string id,
    std::string brand,
    float price,
    VehicleType type,
    CarType car_type);
    
    Car(std::string id,
    std::string brand,
    VehicleType type,
    CarType car_type);

    ~Car() {
        std::cout<<"\nCar Object is deleted : ID : "<<id();
    }

    void calculateTax();

    CarType carType() const { return _car_type; }
};

#endif // CAR_H
