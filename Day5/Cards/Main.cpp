#include<iostream>
#include "Functionalities.h"
int main(){
    Card* arr[5];
    createObject(arr);
    Card** ress=MatchingIssueCard(arr,Issuer::MASTERCARD);
    for(int i=0;i<5;i++){
        if(ress[i]!=nullptr){
            std::cout<<ress[i];
        }
    }

}