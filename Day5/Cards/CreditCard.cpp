#include "CreditCard.h"

CreditCard::CreditCard(int number, int cvv_number, float annual_charge, int limit, Issuer issuer, CreditCardType category)
:Card(number,cvv_number,annual_charge,limit,issuer),_category(category)
{
}

std::ostream &operator<<(std::ostream &os, const CreditCard &rhs) {
    os << static_cast<const Card &>(rhs)
       << " _category: " <<DisplayEnum(rhs._category);
    return os;
}

float CreditCard::calculateOnCharge()
{
    
    if(issuer()==Issuer::VISA)
    {
        return (limit()/100)* annualCharge();
    }
    else if(issuer()==Issuer::RUPAY)
    {
        return (limit()/50)* annualCharge();
    }
    else{
        return (limit()/10)* annualCharge();
    }

}

std::string DisplayEnum(const CreditCardType type){
    if(type==CreditCardType::DELUX)
    {
        return "DELUX";
    }
    else if(type==CreditCardType::PREMIUM){
        return "PREMIUM";
    }
    else{
        return "SIGNATURE";
    }
}
