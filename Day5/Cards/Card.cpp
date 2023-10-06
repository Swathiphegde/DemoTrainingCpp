#include "Card.h"
#include<iostream>

Card::Card(int number, int cvv_number, float annual_charge, int limit, Issuer issuer)
:_cvv_number(cvv_number),_annual_charge(annual_charge),_limit(limit),_issuer(issuer)
{
    if(number>=1000&&number<10000){
        _number=number;
    }
    else{
        std::runtime_error("Invalid number");
    }
    if(cvv_number>=100&&cvv_number<100){
        _cvv_number=cvv_number;
    }
    else{
        std::runtime_error("Invalid CVV");
    }
}
std::ostream &operator<<(std::ostream &os, const Card &rhs) {
    os << "_number: " << rhs._number
       << " _cvv_number: " << rhs._cvv_number
       << " _annual_charge: " << rhs._annual_charge
       << " _limit: " << rhs._limit
       << " _issuer: " <<DisplayEnum(rhs._issuer);
    return os;
}

std::string DisplayEnum(const Issuer iss){
    if(iss==Issuer::MASTERCARD)
    {
        return "MASTERCARD";
    }
    else if(iss==Issuer::RUPAY)
    {
        return "RUPAY";
    }
    else{
        return "VISA";
    }
}
