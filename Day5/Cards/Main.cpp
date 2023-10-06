#include<iostream>
#include "Functionalities.h"
int main(){
    Card* arr[5];
    
    Card* ress[5]{nullptr};
    try{
    createObject(arr);
    MatchingIssueCard(arr,Issuer::MASTERCARD,ress);
    for(int i=0;i<5;i++){
        if(ress[i]!=nullptr){
            std::cout<<*(ress[i]);
        }
        else{
            break;
        }
    }
    }catch(std::runtime_error& er){
        std::cout<<er.what();
    }

}