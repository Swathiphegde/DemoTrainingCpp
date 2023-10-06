#ifndef DEBITCARD_H
#define DEBITCARD_H
#include "Issuer.h"
#include "Card.h"
#include <ostream>

class DebitCard:public Card
{
private:
    int _transaction_limit;
public:
    DebitCard(
        int number,
        int cvv_number,
        float annual_charge,
        int limit,
        Issuer issuer,
        int transaction_limit);
    ~DebitCard(){}
    float calculateOnCharge() override;

    friend std::ostream &operator<<(std::ostream &os, const DebitCard &rhs);
    
};



#endif // DEBITCARD_H
