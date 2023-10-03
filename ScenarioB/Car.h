#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"
#include "CarType.h"
class Car:public Vehicle
{
private:
    CarType _car_type;
public:
    ~Car() {std::cout<<"car wit id: "<<id()<<"deleted";}

    CarType carType() const {return _car_type;}
};

#endif // CAR_H
