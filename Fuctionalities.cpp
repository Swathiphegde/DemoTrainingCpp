#include "Fuctionalities.h"
#include "vehicle.h"
#include "Type.h"
void createObject(Vehicle *container[3])
{
    //container's 0 stores the address of this object on the heap
   container[0] =new Vehicle("v101","Maruti",Type::CAR,870000.0f);
   container[1] =new Vehicle("v102","Honda",Type::CAR,970000.0f);
   container[2] =new Vehicle("v103","Toyota",Type::CAR,1270000.0f);
}

float averagePrice(Vehicle *container[3])
{
    float total=0.0f;
    for(int i=0;i<3;i++){
        //-> is actually dereferencing so * and ->must not use at a time
        //i.e *(container[i])->price <==> (container[i])->price
       total +=(container[i])->price();
    }
    return total/3;
}
