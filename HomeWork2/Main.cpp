#include<iostream>
#include "Car.h"
#include "CarCateogry.h"
#include "Functionalities.h"

int main(){
    Car* arr[3];
    createObject(arr);
    std::cout<<"Average Fuel Capacity : "<<findAverageFuelCapacity(arr)<<"\n";
    std::cout<<"Count of CarCategory : SUV : "<<findCountOfGivenBrand(arr,CAR_CATEGORY::suv)<<"\n";
    findBestPassengerCar(arr,CAR_CATEGORY::SEDAN);
    freeMemory(arr);

}