#include "Functionalities.h"

void createObject(Customer *arr[5])
{
    arr[0]=new Customer(101,"Ajuha",CustomerType::PREMIUM,176.0f);
    arr[1]=new Customer(102,"Jane",CustomerType::REGULAR,977.9f);
    arr[2]=new Customer(103,"Amit",CustomerType::VIP,105.0f);
    arr[3]=new Customer(104,"Smith",CustomerType::VIP,200.0f);
    arr[4]=new Customer(105,"Amit",CustomerType::REGULAR,99.0f);
}

Customer** findCustomer(Customer* arr[5],CustomerType type){
    Customer** ar=new Customer*[3];
    int j=0;
    for(int i=0;i<5;i++){
        if(type==(arr[i])->type()){
            ar[j++]=arr[i];
        }
    }
    return ar;
    
}

Customer** creditScores(Customer* arr[5]){
    int j=0;
    Customer** ar=new Customer*[3];
    for(int i=0;i<5;i++){
        if((arr[i])->customerStoreCredits()>=100&&(arr[i])->customerStoreCredits()<=200){
            ar[j++]=arr[i];
        }
    }
    return ar;
}

float averageStoreCredits(Customer *arr[5], CustomerType type)
{
    float total=0.0f;
    int c=0;
    for(int i=0;i<5;i++){
        if((arr[i])->type()==type){
            total+=(arr[i])->customerStoreCredits();
            ++c;
        }
    }
    return total/c;
}

void freeMemory(Customer *arr[5])
{
    for(int i=0;i<5;i++){
        delete arr[i];
    }
}
