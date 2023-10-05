#include "Functionalities.h"

void createObject(Car *arr[3])
{
    arr[0]=new Car("c101","B1","M1",CAR_CATEGORY::SEDAN,7656.9f,4,180);
    arr[1]=new Car("c102","B2","M2",CAR_CATEGORY::SPORTS_HATCHBACK,4556.9f,2,177);
    arr[2]=new Car("c103","B3","M3",CAR_CATEGORY::suv,8656.9f,4,190);
    //std::cout<<"\noperator+ : \n"<<*(arr[1]);
}

float findAverageFuelCapacity(Car *arr[3])
{
    float total=0.0f;
    for(int i=0;i<3;i++){
        total+=(arr[i])->carFuelCapacity();
    }
    return total/3;
}

int findCountOfGivenBrand(Car *arr[3], CAR_CATEGORY type)
{
    int count=0;
    for(int i=0;i<3;i++){
        if(type==(arr[i])->type())
            count++;
    }
    return count;
}

void findBestPassengerCar(Car *arr[3], CAR_CATEGORY type)
{
    int max=0;
    Car carDetails=*arr[0];
    for(int i=1;i<3;i++){
        if(type==(arr[i])->type()){
            if(max<=arr[i]->carSeatCount()){
                max=arr[i]->carSeatCount();
                carDetails=*arr[i];
            }
        }
    }
    
    std::cout<<"Car with Highest seat numbers : "<<"Car Brand : "<<carDetails.carBrand()<<" Car Model : "<<carDetails.carModel()<<std::endl;;
}

void freeMemory(Car *arr[3])
{
    for(int i=0;i<3;i++){
        delete arr[i];
    }
}
