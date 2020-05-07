#include <iostream>
#include <cstring>
#include "account.hpp"

using namespace std;

// Sets the name
void Account::SetName(string name){
    this -> name = name;
}

// Sets the Tax ID
void Account::SetTaxID(long taxID){
    this -> taxID = taxID;
}

// Sets the current Balance
void Account::SetBalance(double balance){
    this -> balance = balance;
}

// Gets the clients name
string Account::GetName(){
    return name;
}

//Get the clients Tax ID
long Account::GetTaxID(){
    return taxID;
}

//Get the clients Balance
double Account::Getbalance(){
    return balance;
}

//Client makes a desposit
void Account::MakeDeposit(double amount){
    if (amount > 0){
        balance = balance + amount;
        numdeposits = numdeposits + 1;
    }
    else{
        cout << "You are making a deposit, please enter a positive number" << endl;
    }
}

void Account::MakeWithdraw(double amount){
    if (amount > 0){
        balance = balance - amount;
        numwithdraws = numwithdraws + 1;
    }
    else if(amount < 0){
        balance = balance + amount;
        numwithdraws = numwithdraws + 1;
    }
    else{
        cout << "You are making a withdraw, please enter any number but 0." <<endl;
    }
}

//saves account variables
Account::Account(){
    name ="";
    taxID = 0;
    balance = 0;
}

Account::Account(string name, long taxID, double balance):
Account(){
    this -> name = name;
    this -> taxID = taxID;
    this -> balance = balance;
}

void Account::display(){
    cout<<"Name: "<<name<<endl;
    cout<<"TaxID: "<< taxID<<endl;
    cout<<"Balance: "<<balance<<endl;
}