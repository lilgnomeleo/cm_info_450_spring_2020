#include <iostream>
#include <cstring>
#pragma once

using namespace std;

class Account{

    private:
    string name;
    long taxID;
    double balance;

    protected:
    int numdeposits = 0;
    int numwithdraws = 0;

    public:
    void SetName(string name);
    void SetTaxID(long taxID);
    void SetBalance(double balance);

    string GetName();
    long GetTaxID();
    double Getbalance();

    void MakeDeposit(double amount);
    void MakeWithdraw(double amount);

    Account();
    Account(string name, long taxID, double balance);
    
    void display();

};
