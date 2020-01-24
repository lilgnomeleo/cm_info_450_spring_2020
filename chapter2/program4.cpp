//* This program converts gallons to liters using floating point numbers. */

#include <iostream>
using namespace std;

int main()
{
    double gallons, liters;

    cout << "Enter number of gallons: ";
    cin >> gallons; // this collects the input from user

    liters = gallons * 3.7854; // this converts it to liters

    cout << "Liters: " << liters;

    return 0;
}