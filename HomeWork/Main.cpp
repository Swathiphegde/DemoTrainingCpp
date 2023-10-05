#include<iostream>
#include "Customer.h"
#include "CustomerType.h"
#include "Functionalities.h"

int main(){

    Customer* arr[5]{};
    //create customer objects
    createObject(arr);

    //get list of particular customerType
    Customer **arr2;
    arr2=findCustomer(arr,CustomerType::VIP);
    std::cout<<"Customers with type VIP"<<std::endl;
    for(int i=0;i<3;i++){
        if(arr2[i]!=nullptr){
            std::cout<<*(arr2[i]);
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
    

    //get list of customers whose creditscore is between 100 and 200 (inclusive)
     arr2=creditScores(arr);
     std::cout<<"Customers whose credits score is between 100 and 200"<<std::endl;
    for(int i=0;i<3;i++){
        if(arr2[i]!=nullptr){
            std::cout<<*(arr2[i]);
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;

    //get average customer credit scores
    std::cout<<"Average credit scores of customer type VIP  is : "
            <<averageStoreCredits(arr,CustomerType::VIP);

    freeMemory(arr);

}
