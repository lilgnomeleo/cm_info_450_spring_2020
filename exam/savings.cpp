#include <iostream>
#include <string>
#include "savings.hpp"

using namespace std;

void savings::DoWithdraw(double amount){
    MakeWithdraw(amount);
}

savings::savings(string name, long taxID, double balance):
Account(name,taxID,balance){}

void savings::display(){
    cout << "Your Accounts Withdrawal Record: " << numwithdraws << endl;
    cout << "Your Accounts Deposit Record: " << numdeposits << endl;
}