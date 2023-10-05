#include "Car.h"

Car::Car(std::string id, std::string brand, float price, VehicleType type, CarType car_type)
:Vehicle(id,brand,price,type),_car_type(car_type)
{
}

Car::Car(std::string id, std::string brand, VehicleType type, CarType car_type)
:Vehicle(id,brand,type),_car_type(car_type)
{
}

void Car::calculateTax()
{
    std::cout<<"\nCar calculateTax(5%) : "<<(0.05*price());
}
