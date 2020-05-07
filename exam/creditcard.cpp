#include <iostream>
#include <cstring>
#include "creditcard.hpp"

using namespace std; 

void CreditCard::DoCharge(string name, double amount){

    //Make a withdraw and add to base class
    MakeWithdraw(amount);

    //Move all the charges down one and delete the oldest name
    for(int i=8; i>=1; i--){
        last10charges[i] = last10charges[i-1];
    }

    //add new name to the list
    last10charges[0] = name;

}

void CreditCard::MakePayment(double amount){
    //Make a deposit and add to base class
    MakeDeposit(amount);
}

CreditCard::CreditCard(string name, long taxID, double balance):
Account(name,taxID,balance){

}

void CreditCard::display(){
    cout << "---Last 10 Charges to Your Account---\n";
    int n = 1;
    
    for(int i = 0; i<9; i++){

        cout << "Name of Charge "<< n << ": " << last10charges[i] << endl;

        n++;
    }

    cout << "Total amount of deposits: " << numdeposits << endl;
}