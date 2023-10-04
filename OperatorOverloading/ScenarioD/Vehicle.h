#ifndef VEHICLE_H
#define VEHICLE_H
#include<iostream>
#include "VehicleType.h"
class Vehicle
{
private:
    std::string  _id;
    std::string _brand;
    float _price;
    VehicleType _type;


public:
    Vehicle() =delete;  //default constructor is disabled
    Vehicle(const Vehicle&)=default;
    Vehicle(std::string  id,
    std::string brand,
    float price,
    VehicleType type);
    ~Vehicle() {
        std::cout<<"\nVhicle with id : "
                <<_id
                <<" is deleted";
    }

    float calculateTax();
    float calculateTax(float ax_percent);
    float calculateTx(float cgst,float sgst);


    //Operator overloading
    //e1 + e2 ==>   e1+operator(e2);
    float operator+ (Vehicle e2)
    {
        //Current object's price PLUS passed object's price
        return this->price()+e2.price();
    }

    std::string id() const { return _id; }

    std::string brand() const { return _brand; }

    float price() const { return _price; }

    VehicleType type() const { return _type; }

   // friend std::ostream &operator<<(std::ostream &os, const Vehicle &rhs);


    friend std::ostream& operator<<( std::ostream& os,const Vehicle& obj){
        os<<"Id: "<<obj._id
        <<"\t"<<"Brand "<<obj._brand
        <<"\t"<<"Price "<<obj._price
        <<"\t"<<DisplayEnum(obj._type);
        return os;
    }
};
std::string DisplayEnum(const VehicleType val);

#endif // VEHICLE_H
