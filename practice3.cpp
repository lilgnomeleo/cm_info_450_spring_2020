#include <iostream>
using namespace std;

int main()
{

for(int year = 1; year > 0;){

cout << "Please enter a year to check if it is a leap year not"<<endl
<<"(Or 0 to terminate the program)"<<endl;
cin >> year;

//check for 0 will close if user inputs 0
if(year == 0){
  cout << "You entered 0 or a letter. The program will now terminate";
  return 0;
}

//if user does not put 0 will run through the checks for if it is a leap year
else if (year % 4 == 0){
  
  if (year % 100 == 0){
    
    if (year % 400 == 0){
      cout << "The year: " << year << " is a leap year!"<<endl;
    }
    else
      cout << "The year: " << year << " is a not leap year!"<<endl;
    }
  else
    cout << "The year: " << year << " is a leap year!"<<endl;
  }
else
  cout << "The year: " << year << "is a not leap year!"<<endl;

}
}