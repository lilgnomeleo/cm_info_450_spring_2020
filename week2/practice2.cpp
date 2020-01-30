#include <iostream>
using namespace std;

int main()
{
  int number = 6;
  int i;
  bool primeCheck;



for(int number = 1; number > 0;){

cout << "Please enter a positive integer! (Or 0 to terminate the program)";
cin >> number;


for(i = 2; i <= number/2; ++i){

        //bool check if prime avoids float number error
      if(number % i == 0){
        primeCheck = false;
        break;
      }
  }
  if(number == 0){
    cout << "You entered 0 the program will now terminate";
    return 0;
  }
  else if (primeCheck)
    cout << "The number: " << number << " is prime! "<<endl;
  else
    cout << "The number: " << number << " is not prime! "<<endl;

}
}