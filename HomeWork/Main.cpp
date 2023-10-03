#include<iostream>
#include "Customer.h"
#include "CustomerType.h"
#include "Functionalities.h"

int main(){

    Customer* arr[5]{};
    //create customer objects
    createObject(arr);

    //get list of particular customerType
    Customer arr2[]{};
    findCustomer(arr,CustomerType::VIP,arr2);
    for(Customer c:arr2){
        std::cout<<"\n"<<c;
    }

    //get list of customers whose creditscore is between 100 and 200 (inclusive)
    // Customer* arr3[]{};
    // creditScores(arr,arr3);

    //get average customer credit scores
    std::cout<<"Average credit scores of customer type VIP  is : "
            <<averageStoreCredits(arr,CustomerType::VIP);

    freeMemory(arr);

}
