#include <iostream>
#include <cstring>
#include "account.hpp"

using namespace std;

class savings : public Account{

    public:
    void DoWithdraw(double amount);
    
    savings();
    savings(string name, long taxID, double balance);
    void display();

};