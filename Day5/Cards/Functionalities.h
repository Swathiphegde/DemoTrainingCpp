#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include "Card.h"
#include "DebitCard.h"
#include "CreditCardType.h"
#include "CreditCard.h"
#include<iostream>
/*
A function to pointer array is null or not
*/
bool CheckNull(Card *arr[5]);
/*
cerate 3 objects of DebitCard 2 objects of Credit card
*/
void createObject(Card* arr[5]);
/*
return an array of card pointer for those Cards whose _issuer matches the second pattern
*/
void MatchingIssueCard(Card* arr[5],Issuer issue,Card** res);
/*
return pointer to the array of card with highest annual_charge
*/
int HighestChargedCard(Card* arr[5]);


#endif // FUNCTIONALITIES_H
