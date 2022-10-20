//**OOPS--->OBJECT ORIENTED PROGRAMMING**
//classes ,objects, private, public 

#include <iostream>
using namespace std;

class employee{
    private:
         int a,b,c;                              //private for eg- employee salary, diwali bonus 
    public:
        int d,e;
        void setdata(int a1, int b1, int c1);    //declaration
        void getdata(){
            cout<<"the value of a is "<<a<<endl;
            cout<<"the value of b is "<<b<<endl;
            cout<<"the value of c is "<<c<<endl;
            cout<<"the value of d is "<<d<<endl;
            cout<<"the value of e is "<<e<<endl;
        }
};

void employee ::setdata(int a1, int b1, int c1){    //::-->scope resolution operator for global variables 
    a=a1;
    b=b1;
    c=c1;
}


int main(){
    employee harry;
    //harry.a=13;  //will show error as a is private..main function mei ye show nhi hoskta
    harry.d=34;
    harry.e=69;
    harry.setdata(1,2,4);
    harry.getdata();
    return 0;
}