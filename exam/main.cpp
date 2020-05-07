#include <iostream>
#include <cstring>
#include "account.hpp"
#include "checking.hpp"
#include "creditcard.hpp"
#include "savings.hpp"

using namespace std;

int inputMenu(){
    int input;

    cout << "Please enter the number for the service you wish to use!" << endl;
    cout << "1. Savings Deposit \n2. Savings withdrawal \n3. Checking Deposit \n4. Write A Check \n5. Credit Card Payment" << endl;
    cout << "6. Make A Charge \n7. Display Savings \n8. Display Checking \n9. Display Credit Card \n0. Exit" << endl;
    
    cin >> input;
    

    return input;

}

double gAmount(){
    double amount;
    cout << "Please enter your amount: ";
    cin >> amount;
    return amount;
}

int gChecknum(){
    int checknum;
    cout << "Enter your Check Number: ";
    cin >> checknum;
    return checknum;
}

string gChargeName(){
    string chargeName;
    cout << "Please enter the name of the charge you are making: ";
    cin.ignore();
    getline(cin,chargeName);
    return chargeName;
}

void cont(){
    cout << "Please press any key to continue...";
    cin.ignore();
    cin.get();
    cin.clear();
    // this is silly but its to look like the terminal has been cleared
    cout << string(50, '\n');
}

int main(){
    string userName;
    string name;
    long taxID;
    int input = 1;
    double amount;
    int checknum;



    cout << "--- Welcome to the Cool Guys Bank Terminal --- " << endl;
    cout << "Please enter your name: " << endl;
    cin >> userName;
    cout << "Please enter your Tax ID (do not worry we wont tell anyone ;-) ): " << endl;
    cin >> taxID;
    cout << "Thank you! You have logged in successfully." << endl;
    cont();
    



    Checking checkingBalance(userName, taxID, 100);
    savings savingBalance(userName, taxID, 100);
    CreditCard creditBalance(userName, taxID, 100);

    cout << "---Welcome " << userName <<"!---" << endl;

    do{
        cout << "Checking Balance: $" << checkingBalance.Getbalance() << " Savings Balance : $" << savingBalance.Getbalance() << " Credit Card Balance: $" << creditBalance.Getbalance() << endl;
        input = inputMenu();

        // Make a deposit into savings account
        if(input == 1){
            amount = gAmount();
            savingBalance.MakeDeposit(amount);
            cont();
        }
        // Withdraw from Savings
        else if(input == 2){
            amount = gAmount();
            savingBalance.MakeWithdraw(amount);
            cont();
        }
        //Deposit into Checking
        else if(input == 3){
            amount = gAmount();
            checkingBalance.MakeDeposit(amount);
            cont();
        }
        //Write a check (withdraw from checking)
        else if(input == 4){
            amount = gAmount();
            checknum = gChecknum();
            checkingBalance.WriteCheck(checknum,amount);
            cont();
        }
        //Make a credit card payment (deposit into credit)
        else if(input == 5){
            amount = gAmount();
            creditBalance.MakePayment(amount);
            cont();

        }
        //Charge a credit card (withdraw from credit. Needs Name of charge)
        else if(input == 6){
            amount = gAmount();
            name = gChargeName();
            creditBalance.DoCharge(name,amount);
            cont();
        }
        //Display Savings
        else if(input == 7){
            savingBalance.display();
            cont();
        }
        //Display Checking
        else if(input == 8){
            checkingBalance.display();
            cont();
        }
        //Display Credit Card
        else if(input == 9){
            creditBalance.display();
            cont();
        }
        //Exit
        else if(input == 0){
            input = 0;
        }
        // Incase they enter a number thats not an option
        else {
            cout << "Error!! The number you entered was not an option. Please try again.";
        }

        
    }while(input != 0);

   cout << "Thank you for choosing Cool Guys Bank! We hope to see you again, "<< userName << "!" << endl;
   return 0;
}


