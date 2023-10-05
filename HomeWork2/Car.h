
#ifndef CAR_H
#define CAR_H

#include<iostream>
#include "CarCateogry.h"
class Car
{
private:
    std::string _carChassisNumber;
    std::string _carBrand;
    std::string _carModel;
    CAR_CATEGORY _type;
    float _carPrice;
    int _carSeatCount;
    int _carFuelCapacity;

public:
    Car();//=delete;

    Car(std::string carChassisNumber,
    std::string carBrand,
    std::string carModel,
    CAR_CATEGORY type,
    float carPrice,
    int carSeatCount,
    int carFuelCapacity);

    Car(std::string carChassisNumber,
    std::string carBrand,
    std::string carModel,
    float carPrice);

    Car(const Car& car)=default;
    
    ~Car() {
        std::cout<<"\nCar with ChassisNumber : "
                <<_carChassisNumber
                <<" is destroyed\n";
    }

    float operator+(Car car){   //c1.operator+(c2)
        return this->carPrice()+car.carPrice();
    }

    // friend std::ostream& operator<<(std::ostream& os,const Car& car){
    //     os<<"CarChassisNumber : "<<car._carChassisNumber
    //         <<"CarBrand : "<<car._carBrand
    //         <<"CarModel : "<<car._carModel
    //         <<"CarType : "<<DisplayEnum(car._type)
    //         <<"CarPrice : "<<car._carPrice
    //         <<"CarSeatCount : "<<car._carSeatCount
    //         <<"CarFuelCapacity : "<<car._carFuelCapacity;

    //         return os;

    // }

    std::string carChassisNumber() const { return _carChassisNumber; }

    void setCarChassisNumber(const std::string &carChassisNumber) { _carChassisNumber = carChassisNumber; }

    std::string carBrand() const { return _carBrand; }

    void setCarBrand(const std::string &carBrand) { _carBrand = carBrand; }

    std::string carModel() const { return _carModel; }

    void setCarModel(const std::string &carModel) { _carModel = carModel; }

    CAR_CATEGORY type() const { return _type; }

    void setType(const CAR_CATEGORY &type) { _type = type; }

    float carPrice() const { return _carPrice; }

    void setCarPrice(float carPrice) { _carPrice = carPrice; }

    int carSeatCount() const { return _carSeatCount; }

    void setCarSeatCount(int carSeatCount) { _carSeatCount = carSeatCount; }

    int carFuelCapacity() const { return _carFuelCapacity; }

    void setCarFuelCapacity(int carFuelCapacity) { _carFuelCapacity = carFuelCapacity; }

    friend std::ostream &operator<<(std::ostream &os, const Car &rhs);
};

std::string DisplayEnum(const CAR_CATEGORY val);
#endif // CAR_H
