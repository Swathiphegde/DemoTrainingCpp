#ifndef CREDITCARD_H
#define CREDITCARD_H
#include "CreditCardType.h"
#include "Card.h"
#include <ostream>

class CreditCard:public Card
{
private:
    CreditCardType _category;
public:
    CreditCard(
        int number,
        int cvv_number,
        float annual_charge,
        int limit,
        Issuer issuer,
        CreditCardType category);
    ~CreditCard(){}
    float calculateOnCharge() override;

    friend std::ostream &operator<<(std::ostream &os, const CreditCard &rhs);
    
};
std::string DisplayEnum(const CreditCardType type);



#endif // CREDITCARD_H
