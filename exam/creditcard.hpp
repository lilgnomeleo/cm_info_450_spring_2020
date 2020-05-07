#include <iostream>
#include <cstring>
#include "account.hpp"


class CreditCard : public Account{

    long cardnumber;
    string last10charges[9];

    public:
    void DoCharge(string name, double amount);
    void MakePayment(double amount);

    CreditCard();
    CreditCard(string name, long taxID, double balance);

    void display();
};