#include "Functionalities.h"

void CreateVehicle(Vehicle *arr[SIZE])
{
    arr[0]=new Car("c101","Honda",7667.0f,VehicleType::CAR,CarType::SEDAN);
    arr[1]=new Car("c102","Hyundai",7667.0f,VehicleType::CAR,CarType::SUV);
    arr[2]=new Car("c103","Suzuki",7667.0f,VehicleType::CAR,CarType::HATCHBACK);
}

void averagePrice(Vehicle *arr[SIZE])
{
    float total=0.0f;
    for(int i=0;i<SIZE;i++){
        total+=(*arr[i]).price();
    }
    std::cout<<"Average Price : "<<(total/SIZE);
}

void calculateTax(Vehicle *arr[SIZE])
{
    for(int i=0;i<SIZE;i++){
        arr[i]->calculateTax();
    }
}

void freeMemory(Vehicle *arr[3])
{
    for(int i=0;i<SIZE;i++){
        delete arr[i];
    };
}
