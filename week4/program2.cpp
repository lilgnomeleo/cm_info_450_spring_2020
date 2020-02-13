#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

int main(){
    string students[100];
    char nextStudent[100];
    int numstudents = 0;
    do{
        cout << "Enter the student at index " << numstudents << ": ";
        cin.getline(nextStudent,100);
        students[numstudents] = nextStudent;
        numstudents++;
    }
    while(strlen(nextStudent)>1);

    for(int i = 0; i < numstudents-1; i++){
        cout << "Student at index [" << i << "]: " << students[i] << "\n";
    }
}