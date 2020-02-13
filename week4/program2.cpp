#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    // define
    string name[30];
    char nxtName[100];
    int num = 0;

    //do lo
    do{
        cout << "Enter the student at index " << num << ": ";
        cin.getline(nxtName,100);
        name[num] = nxtName;
        num++;
    }
    while(nxtName[0]);

    for(int i = 0; i < num-1; i++){
        cout << "Student at index [" << i << "]: " << name[i] << endl;
    }
}