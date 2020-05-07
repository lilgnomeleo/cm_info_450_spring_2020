#include <iostream>
#include <string>
#include "checking.hpp"

using namespace std;

void Checking::WriteCheck(int checknum, double amount){
    // Make withdraw calls to account
    MakeWithdraw(amount);

    //deletes the oldest check number
    for(int i=8; i>=1; i--){
        last10checks[i] = last10checks[i-1];
    }
    //add the new check number to the list
    last10checks[0] = checknum;    
}


Checking::Checking(string name, long taxID, double balance):
Account(name,taxID,balance){
}


void Checking::display(){
    cout << "---Written Checks Record---\n";
    int n = 1;
    for(int i = 0; i<9; i++){
        int n = 1;

        cout << "Check Number: " << n << last10checks[i] << endl;

       n++;
    }

    cout << "Total amount of deposits: " << numdeposits << endl;
}