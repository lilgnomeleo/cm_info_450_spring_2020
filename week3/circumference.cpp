#include <iostream>
using namespace std;

const float pi = 3.14159265358979323846;
double calculateCircumference(double inputNum);

int main()
{ 
double radius = 0;
double result = 0;

cout << "Circumference finder 2000: "<<endl;
cout << "Enter the radius: ";
cin >> radius;
result = calculateCircumference(radius);
cout << "The circumference is: " << result <<"!";
return 0;
}

// function to determine circumference
double calculateCircumference(double inputNum) 
{
  double circumference;
  
  circumference = 2*pi*inputNum;
  return circumference;
}