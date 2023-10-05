#include "vehicle.h"
#include "Type.h"
#include "Fuctionalities.h"
#include<iostream>

/*
Creating vehicle class and 3 objects of it and finding avearge of price
*/

int main(){
    Vehicle* arr[3];
    createObject(arr);
    std::cout<<"Average Price : "<<averagePrice(arr)<<std::endl;
    freeMemory(arr);
}