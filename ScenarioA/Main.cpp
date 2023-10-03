#include "vehicle.h"
#include "Type.h"
#include "Fuctionalities.h"
#include<iostream>

int main(){
    Vehicle* arr[3];
    createObject(arr);
    std::cout<<"Average Price : "<<averagePrice(arr)<<std::endl;
}