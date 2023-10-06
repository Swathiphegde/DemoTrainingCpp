#ifndef CARD_H
#define CARD_H
#include "Issuer.h"
#include <ostream>
class Card
{
private:
    int _number;
    int _cvv_number;
    float _annual_charge;
    int _limit;
    Issuer _issuer;

public:
    Card(
        int number,
        int cvv_number,
        float annual_charge,
        int limit,
        Issuer issuer
    );
    ~Card() {}


    virtual float calculateOnCharge() =0;

    int number() const { return _number; }

    int cvvNumber() const { return _cvv_number; }

    float annualCharge() const { return _annual_charge; }

    int limit() const { return _limit; }

    Issuer issuer() const { return _issuer; }

    friend std::ostream &operator<<(std::ostream &os, const Card &rhs);
};
std::string DisplayEnum(const Issuer iss);
#endif // CARD_H
