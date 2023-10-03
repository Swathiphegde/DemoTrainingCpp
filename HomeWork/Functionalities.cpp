#include "Functionalities.h"

void createObject(Customer *arr[5])
{
    arr[0]=new Customer(101,"Ajuha",CustomerType::PREMIUM,176.0f);
    arr[1]=new Customer(102,"Jane",CustomerType::REGULAR,977.9f);
    arr[2]=new Customer(103,"Amit",CustomerType::VIP,105.0f);
    arr[3]=new Customer(104,"Smith",CustomerType::VIP,200.0f);
    arr[4]=new Customer(105,"Amit",CustomerType::REGULAR,99.0f);
}

void findCustomer(Customer* arr[3],CustomerType type,Customer (&arr2)[]){
    int j=-1;
    for(int i=0;i<5;i++){
        if(type==(arr[i])->type()){
            arr2[++j]=arr[i];
        }
    }
    
}

void creditScores(Customer* arr[3]){
    int j=-1;
    for(int i=0;i<5;i++){
        if((arr[i])->customerStoreCredits()>=100&&(arr[i])->customerStoreCredits()<=200){
            
        }
    }
}

float averageStoreCredits(Customer *arr[3], CustomerType type)
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
