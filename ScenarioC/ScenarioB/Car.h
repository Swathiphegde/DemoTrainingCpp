#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"
#include "CarType.h"
#include <ostream>
class Car:public Vehicle
{
private:
    CarType _car_type;
public:
    Car(std::string id,std::string brand,float price,VehicleType type,CarType cType);

    Car(std::string id,std::string brand,VehicleType type,CarType cType);

    float calculateTax() override ;


    ~Car() {
        std::cout<<"\ncar with id: "<<id()
            <<"deleted\n";}

    CarType carType() const {return _car_type;}

    friend std::ostream &operator<<(std::ostream &os, const Car &rhs);

    
};
std::string DisplayEnum(const CarType val);
#endif // CAR_H
