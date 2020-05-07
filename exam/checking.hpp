#include <iostream>
#include <cstring>
#include "account.hpp"

using namespace std;

class Checking : public Account{

    public:
    int last10checks[9] = { };

    void WriteCheck(int checknum, double amount);

    Checking();
    Checking(string name, long taxID, double balance);

    //display the accounts check register(check numbers) and deposit record
    void display();

};