#include<iostream>
using namespace std;

class complex; //forward declaration --> of class for class using it beforehand

class calculator{
   public:
    int sumreal(complex,complex); //--> complex is user defined data type aka class
    int sumcomplex(complex,complex);
};

class complex{  
  int a,b;  
//FRIEND -->allowance for usage of PRIVATE MEMBERS of a class to another NON MEMBER function or class
 // Individually declaring functions as friends
    // friend int Calculator ::sumreal(Complex, Complex);
    // friend int Calculator ::sumComplex(Complex, Complex);

 // Aliter: Declaring the entire calculator class as friend
  friend class calculator;
  public:
    void setnumber(int x,int y){
        a=x;
        b=y;
    }
    void printnumber(){
        cout<<"the complex number is: "<<a<<" + "<<b<<"i"<<endl;
    }
 };
 
int calculator::sumreal(complex o1,complex o2){
   return(o1.a+o2.a);
}
int calculator::sumcomplex(complex o1, complex o2){
    return(o1.b+o2.b);
}

int main(){
    complex c1,c2;       //c1,c2 objects of class complex
    c1.setnumber(1,4);
    c1.printnumber();

    c2.setnumber(4,5);
    c2.printnumber();
    
    calculator calc;    //calc is object of class clculator
    int r= calc.sumreal(c1,c2);
    cout<<"the real sum is "<<r<<endl;
    int c= calc.sumcomplex(c1,c2); 
    cout<<"the complex sum is "<<c<<endl;
    return 0;
}