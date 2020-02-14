#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    // define
    string name[30];
    char nxtName[100];
    int num = 0;

    //do loop that checks if nxtName is empty or not
    do{
        cout << "Enter the student at index " << num << ": ";
        cin.getline(nxtName,100);
        name[num] = nxtName;
        num++;
    }
    // if nxtName is empty kills the do loop
    while(nxtName[0] || num >= 30);

    //print the array on a new line each time
    for(int i = 0; i < num-1; i++){
        cout << "Student at index [" << i << "]: " << name[i] << endl;
    }
}