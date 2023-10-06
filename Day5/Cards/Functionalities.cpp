#include "Functionalities.h"

bool CheckNull(Card *arr[5])
{

    for(int i=0;i<5;i++){
        if(arr[i]!=nullptr){
            return false;
        }
    }
    return true;
}
void createObject(Card *arr[5])
{
    arr[0]=new DebitCard(1011,201,658.9f,4,Issuer::MASTERCARD,5);
    arr[1]=new DebitCard(1021,202,558.9f,5,Issuer::RUPAY,5);
    arr[2]=new DebitCard(1031,203,878.9f,4,Issuer::VISA,5);
    arr[3]=new CreditCard(1041,204,656.7f,4,Issuer::RUPAY,CreditCardType::DELUX);
    arr[4]=new CreditCard(1051,205,544.9f,3,Issuer::VISA,CreditCardType::SIGNATURE);
    std::cout<<"array created";

}
void MatchingIssueCard(Card *arr[5], Issuer issue,Card** res)
{
    if(CheckNull(arr)){
        throw std::runtime_error("Array is empty");
    }
    //Card* res[5]={nullptr};
    int k=0;
    for(int i=0;i<5;i++){
        if(arr[i]==nullptr){    //If first object is null but second is not
            continue;
        }

        if(arr[i]->issuer()==issue){
            res[k++]=arr[i];
        }
    }
    //return res;
}

int HighestChargedCard(Card *arr[5])
{
    if(CheckNull(arr)){
        throw std::runtime_error("Array is empty");
    }
    float max=arr[0]->annualCharge();
    float currentChage=0.0f;
    int cvv=arr[0]->cvvNumber();
    for(int i=0;i<5;i++){
        currentChage=arr[i]->annualCharge();
        if(max<currentChage){
            max=currentChage;
            cvv=arr[i]->cvvNumber();
        }
    }
    return cvv;
}
