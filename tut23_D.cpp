#include<iostream>
using namespace std;

class simple{
  int data1; //private members-->inhi ki value set hoti hai
  int data2;
  int data3;
  public:
    simple(int a, int b=9, int c=10){  //constructor for automatic invoking 
        data1=a;                       //default values are used if no values are given further 
        data2=b;
        data3=c;
    }
    void display(){
        cout<<"the value of data1,data2,data3 is "<<data1<<" "<<data2<<" "<<data3;
    }
};
//void simple::display(){blah blah};
int main(){
    simple s(11,131);
    s.display();
    return 0;
}