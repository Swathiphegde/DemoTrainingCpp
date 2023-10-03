#include "Bike.h"

Bike::Bike(std::string id, std::string brand, float price, VehicleType type, float milage, BikeType btype)
:Vehicle(id,brand,price,type),_bike_milage(milage),_bike_type(btype)
{
}

Bike::Bike(std::string id, std::string brand, VehicleType type, float milage, BikeType btype)
:Vehicle(id,brand,type),_bike_milage(milage),_bike_type(btype)
{
}

std::ostream &operator<<(std::ostream &os, const Bike &rhs) {
    os << static_cast<const Vehicle &>(rhs)
       << " _bike_milage: " << rhs._bike_milage
       << " _bike_type: " << DisplayEnum(rhs._bike_type);
    return os;
}

float Bike::calculateTax(){
    return 0.5f*price();
}

std::string DisplayEnum(const BikeType val){
    if(val==BikeType::SPORTS)
        return "SPORTS";
    else
        return "COMMUTE";
}
