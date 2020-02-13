#include <iostream>
#include <cmath>

using namespace std;

int main() 
{ 
  // the values 
  int lst1[10]; 
  int sum = 0;
  double mean;
  double stdv;

  //the loop for sum
  for(int i=0;i<=9;i++)
  {
    cout<<"Enter the number for index "<<i<<":";
    cin>>lst1[i];
    sum = sum+lst1[i];
  }
  
  //calulate the mean
  mean = sum/10;


  //the loop for standard deviation
  for(int i=0; i<10; ++i)
  {
    stdv += pow(lst1[i]-mean, 2);
  }
  stdv = sqrt(stdv/10);

  cout<<"Results, "<< mean <<","<<stdv;
  return 0;

  

}