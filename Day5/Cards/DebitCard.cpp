#include "DebitCard.h"

DebitCard::DebitCard(int number, int cvv_number, float annual_charge, int limit, Issuer issuer, int transaction_limit)
:Card(number,cvv_number,annual_charge,limit,issuer),_transaction_limit(transaction_limit)
{
}

std::ostream &operator<<(std::ostream &os, const DebitCard &rhs) {
    os << static_cast<const Card &>(rhs)
       << " _transaction_limit: " << rhs._transaction_limit;
    return os;
}

float DebitCard::calculateOnCharge()
{
    return (limit()/100)*annualCharge();
}
