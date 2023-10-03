#include "Customer.h"

Customer::Customer(int id, std::string customerName, CustomerType ctype, float customerStoreCredits)
 :_customerId(id),_customerName(customerName),_type(ctype),_customerStoreCredits(customerStoreCredits)
{
}
std::ostream &operator<<(std::ostream &os, const Customer &rhs) {
    os << "_customerId: " << rhs._customerId
       << " _customerName: " << rhs._customerName
       << " _type: " <<DisplayEnum(rhs._type)
       << " _customerStoreCredits: " << rhs._customerStoreCredits;
    return os;
}

//To display each enum object
std::string DisplayEnum(const CustomerType val){
    if(val==CustomerType::PREMIUM)
        return "PREMIUM";
    else if(val==CustomerType::REGULAR)
        return "REGULAR";
    else
        return "VIP";
}
