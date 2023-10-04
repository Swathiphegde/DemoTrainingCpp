#include "Car.h"
#include "CarCateogry.h"

Car::Car(std::string carChassisNumber, std::string carBrand, std::string carModel, CAR_CATEGORY type, float carPrice, int carSeatCount, int carFuelCapacity)
:_carChassisNumber(carChassisNumber),_carBrand(carBrand),_carModel(carModel),_type(type),_carPrice(carPrice),_carSeatCount(carSeatCount),_carFuelCapacity(carFuelCapacity)
{
}

Car::Car(std::string carChassisNumber, std::string carBrand, std::string carModel, float carPrice)
:_carChassisNumber(carChassisNumber),_carBrand(carBrand),_carModel(carModel),_carPrice(carPrice)
{
}

std::ostream &operator<<(std::ostream &os, const Car &rhs) {
    os << "_carChassisNumber: " << rhs._carChassisNumber
       << " _carBrand: " << rhs._carBrand
       << " _carModel: " << rhs._carModel
       << " _type: " <<DisplayEnum(rhs._type)
       << " _carPrice: " << rhs._carPrice
       << " _carSeatCount: " << rhs._carSeatCount
       << " _carFuelCapacity: " << rhs._carFuelCapacity;
    return os;
}

std::string DisplayEnum(const CAR_CATEGORY val)
{
    if(val==CAR_CATEGORY::SEDAN)
        return "SEDAN";
    else if(val==CAR_CATEGORY::SPORTS_HATCHBACK)
        return "HATCHBACK";
    else
        return "SUV";
}
