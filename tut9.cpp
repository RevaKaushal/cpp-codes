#include<iostream>
using namespace std;

int main(){
    /*what is POINTER? ---> DATA TYPE (like integer,float,boolean) WHICH 
    HOLDS THE ADDRESS OF OTHER DATA TYPES*/

    int a=3;
    int*b=&a; //[b is a pointer which holds the address of a]
              //[ &---->(address OF) refrence operator]
              //[ *---->(value AT)   dereference operator]
    cout<<"the address of int a is: "<<b<<endl;
    cout<<"the address of int a is: "<<&a<<endl;
    cout<<"the value at address b is; "<<*b<<endl;

    //POINTER TO POINTER
    int**c=&b;  //[C EAK POINTER HAI JO DUSRE POINTER KE ADDRESS KO STORE KRTA HAI]
                //[C ADDRESS KA BHI ADDRESS STORE KRAHA HAI]
    cout<<"the address of b is"<<&b<<endl;
    cout<<"the address of b is"<<c<<endl;
    cout<<"the value at address c is"<<*c<<endl;
    cout<<"the value at address, value_at(value_at(c)) is"<<**c<<endl; //WILL GIVE 3

    return 0;
}