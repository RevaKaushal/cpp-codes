#include<iostream>
using namespace std;

class complex{
  int a,b; //private members ki hi value set hoti hai 
  friend complex sumcomplex(complex ,complex);
  public:
   void setnumber(int x,int y){
     a=x;
     b=y;
   }
   void printnumber(){
    cout<<"the number is "<<a<<" + "<<b<<"i"<<endl;
   }
};

complex sumcomplex(complex o1,complex o2){ //sumcomplex [non member func,friend func] has datatype as class 
    complex o3;                            //datatype of Sumcomplex integer nhi hai cuz,vu (a+bi) datatype return kr raha hai
    o3.setnumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;   
}

int main(){
    complex c1,c2,sum;
    c1.setnumber(4,1);
    c1.printnumber();

    c2.setnumber(4,5);
    c2.printnumber();

    sum=sumcomplex(c1,c2);
    sum.printnumber();
    return 0;
}
/* PROPERTIES OF FRIEND FUNCTIONS
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.

*/
