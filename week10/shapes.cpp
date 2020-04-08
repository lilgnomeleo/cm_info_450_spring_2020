
#include <iostream>
using namespace std;
const int PI = 3; // for simplicity, we'll pretend PI is 3
class shape
{
  public:
    virtual int get_perimeter_length(){ return -1; }
   virtual int get_area(){             return -1; }
};

class circle : public shape
{
  private:
    int radius;  
  public:
    circle(int radius){
      this -> radius = radius;
     }
    int get_perimeter_length(){ 
        int p = 2*PI*radius;
        return p; }
    int get_area(){      
        int a = PI*radius*radius;       
        return a; }
};

class rectangle : public shape
{
  private:
    int height;
    int width;
  public:
    rectangle(int height, int width){ 
      this-> height = height;
      this-> width = width;
    }
    int get_perimeter_length(){ 
        int p = ((2*height)+(2*width));
        return p; }
    int get_area(){   
        int a = height*width;          
        return a; }
};

class square : public shape
{
  private:
    int side;
  public:
    square(int side) { 
        this->side = side;
    }
    int get_perimeter_length(){ 
        int p = side*4;
        return p; }
    int get_area(){
        int a = side*side;
        return a; }
};

int main(){
  shape *s1;
  circle c(3);
  s1 = &c;
  cout << "Perimeter: " << s1->get_perimeter_length() << " : Area " << s1->get_area() << endl;
  square s(3);
  s1 = &s;
  cout << "Perimeter: " << s1->get_perimeter_length() << " : Area " << s1->get_area() << endl;
  rectangle r(4,5);
  s1 = &r;
  cout << "Perimeter: " << s1->get_perimeter_length() << " : Area " << s1->get_area() << endl;
  return 0;
}