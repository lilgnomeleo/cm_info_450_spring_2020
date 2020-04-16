#include <iostream>
#include <fstream>

using namespace std;

int main() {

int n = 10000;

ofstream fo;

fo.open("randoms.txt");

for(int i=0;i<n;i++)
{

fo<<rand()%-99999 + -10000<<endl;

}

  return 0;

}