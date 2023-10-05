#ifndef VEHICLE_H
#define VEHICLE_H


#include<iostream>
#include "Type.h"
class Vehicle{
    private:
    std::string _id;
    std::string _brand;
    Type _type;
    float _price;
    public:
    Vehicle(
        std::string id,
        std::string brand,
        Type type,
        float price

    );
    Vehicle(
        std::string id,
        std::string brand,
        Type type
    );
    //defaulted copy constructor-->Compiler generates default version
    Vehicle(const Vehicle&)=default;    //shallow copy(Reference)
    ~Vehicle(){
        std::cout<<"\nDeleted";
    }

    //id getter
    std::string id() const { return _id; }

    //brand getter
    std::string brand() const { return _brand; }

    Type type() const { return _type; }

    float price() const { return _price; }
};

#endif // VEHICLE_H
