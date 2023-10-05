#include<iostream>
#include "Functionalities.h"
#define SIZE 3
int main(){
    Vehicle* arr[SIZE];
    CreateVehicle(arr);
    averagePrice(arr);
    //calculateTax(arr);
    freeMemory(arr);
}