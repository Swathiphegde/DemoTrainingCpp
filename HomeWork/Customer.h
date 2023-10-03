#ifndef CUSTOMER_H
#define CUSTOMER_H
#include<iostream>
#include "CustomerType.h"
class Customer
{
private:
    int _customerId;
    std::string _customerName;
    CustomerType _type;
    float _customerStoreCredits;


public:
    Customer(int id,std::string customerName,CustomerType ctype,float customerStoreCredits) ;
    //To create new Object
    Customer(const Customer& obj)=default;
    ~Customer() {
        std::cout<<"\nCustomer with ID : "
              <<_customerId
              <<" is deleted\n";
    }

    int customerId() const { return _customerId; }

    std::string customerName() const { return _customerName; }

    CustomerType type() const { return _type; }

    float customerStoreCredits() const { return _customerStoreCredits; }

    friend std::ostream &operator<<(std::ostream &os, const Customer &rhs);
    
};

std::string DisplayEnum(const CustomerType val);

#endif // CUSTOMER_H
