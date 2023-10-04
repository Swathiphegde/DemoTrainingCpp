#include "Functionalities.h"

void createObject(Vehicle *arr[5])
{
    arr[0]=new Vehicle("v101","Honda",988898.0f,VehicleType::CAR);
    arr[1]=new Vehicle("v102","Hyundai",7766898.0f,VehicleType::CAR);
    arr[2]=new Vehicle("v103","KTM",9873898.0f,VehicleType::BIKE);
    arr[3]=new Vehicle("v104","txt",676898.0f,VehicleType::OTHER);
    arr[4]=new Vehicle("v105","Bajaj",567898.0f,VehicleType::BIKE);

}

void minimumCarPrice(Vehicle *arr[5])
{
    int min=(arr[0])->price();
    Vehicle *tr{nullptr};
    for(int i=1;i<5;i++){
        if(arr[i]->price()<min)
        {
            min=arr[i]->price();
            tr=arr[i];
        }

    }
    std::cout<<*tr<<"\n";
}

void AveragePrice(Vehicle *arr[5])
{
    float total;
    for(int i=0;i<5;i++){
            total+=arr[i]->price();
    }
    std::cout<<"Average price is : "<<total/5<<std::endl;
}

void freeMemory(Vehicle *vehicle[5])
{
    delete[] vehicle;
}
