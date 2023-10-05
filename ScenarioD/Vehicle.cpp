#include "Vehicle.h"

std::ostream &operator<<(std::ostream &os, const Vehicle &rhs) {
    os << "_id: " << rhs._id
       << " _brand: " << rhs._brand
       << " _price: " << rhs._price
       << " _type: " <<DisplayEnum(rhs._type);
    return os;
}
std::string DisplayEnum(const VehicleType val)
{
   if(val==VehicleType::BIKE)
        return "BIKE";
    else if(val==VehicleType::CAR)
        return "CAR";
    else
        return "OTHER";
}

Vehicle::Vehicle(std::string id, std::string brand, float price, VehicleType type)
:_id(id),_brand(brand),_price(price),_type(type)
{
}

float Vehicle::calculateTax()
{
    return 0.18f*_price;
}

float Vehicle::calculateTax(float ax_percent)
{
    return ax_percent*_price;
}

float Vehicle::calculateTx(float cgst, float sgst)
{
    return (cgst*_price)+(sgst*_price*3);
}


