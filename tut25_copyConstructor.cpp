//COPY constructor--> A member function which initializes an object by using ,
//                    previously made object of the same class 
// When no copy constructor is found, compiler supplies its own copy constructor

#include<iostream>
using namespace std;

class number{
  int a;

  public:
   number(){                  //blank constructor having no value for initialization
    a=0;
   }
   number(int x){             //parameterialsed constructor
    a=x;
   }
   number(number &obj){       //Copy constructor [&]-->reference operator
    cout<<"Copy constructor called!!"<<endl;
    a=obj.a;
   }

   void display(){
    cout<<"the number is "<<a<<endl;
   }
};

int main(){
    number x,y,z(40),z2; //objects are formed
    x.display();
    y.display();
    z.display();

    number z1(x);  //z1 should exactly resemble z or x or y [Z1 is new object formed with help of X object]
    z1.display();  //copy constructor invoked

    z2=z;          //copy constructor NOT called[z2 is prexisting object]
    z2.display();

    number z3=z;   //copy constructor invoked
    z3.display();
    return 0;
}