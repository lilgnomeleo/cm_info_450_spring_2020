#include <iostream>
#include<cmath>
using namespace std;


int main() 
{

    for ( int number = 1; number>=0;)

    {   cout << "Enter a positive integer (or 0 to kill the program): ";
        cin >> number;
      
      if (number > 0){
        int power = 2;
        int square = pow(number,power);

        cout << "The square of your number is: " << square << endl;
        }
        else{
          cout << "You entered 0 the program will now terminate";
          return 0;
    }
}
}