#include<iostream>
using namespace std;

class Base{
  int data1;
  public:
   int data2;
   void setdata(){
    cout<<"value of data1 is ";
    cin>>data1;
    data2= 20;
   }
   int getdata1(){ //clever way to get private member of the class
    return data1;
   }
   int getdata2(){
    return data2;
   }
};

class Derived: public Base{ //data2, setdata(), getdata1(), getdata2() is inherited in derived class
   int data3;
   public:
   int process(){          //process is additional function 
    return data3= data2*getdata1();
   }
   void display(){
    cout<<"data1 is "<<getdata1()<<endl;
    cout<<"data2 is "<<getdata2()<<endl;
    cout<<"the multiplication is "<<process();
   }
};

int main(){
    Derived d1;
    d1.setdata();
    d1.process();
    d1.display();
    return 0;
}