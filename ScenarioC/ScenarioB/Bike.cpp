#include "Bike.h"

Bike::Bike(std::string id, std::string brand, float price, VehicleType type, float milage, BikeType btype)
:Vehicle(id,brand,price,type),_bike_milage(milage),_bike_type(btype)
{
}

Bike::Bike(std::string id, std::string brand, VehicleType type, float milage, BikeType btype)
:Vehicle(id,brand,type),_bike_milage(milage),_bike_type(btype)
{
}

float Bike::calculateTax(){
    return 0.5f*price();
}
