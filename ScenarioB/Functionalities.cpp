#include "Functionalities.h"

void createObjct(Car* arr[3])
{
    arr[0]=new Car("v101","Maruti",980090.0f,VehicleType::CAR,CarType::SEDAN);
    arr[1]=new Car("v102","Honda",965652.0f,VehicleType::CAR,CarType::HATCHBACK);
    arr[2]=new Car("v103","Hyundai",9800980.0f,VehicleType::CAR,CarType::SUV);
}

float averagePrice(Car *arr[3])
{
    float total=0.0f;
    for(int i=0;i<3;i++){
        total+=(arr[i])->price();
    }
    return total;
}

void calculateTax(Car *arr[3])
{
    for(int i=0;i<3;i++){
        std::cout<<(arr[i])->calculateTax()<<"\n";
    }
}

void freeMemory(Car *arr[3]){
    for(int i=0;i<3;i++){
        delete arr[i];
    }
}
