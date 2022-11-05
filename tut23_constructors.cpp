
// CONSTRUCTOR --> special MEMBER function with the same name as of the class.
//              --> It is automatically invoked whenever an object is created
//              --> there are THREE types of constructors
//              --> Constructors do not return values; hence they do not have a return type.
//              --> It must be placed in public section of class
#include<iostream>
using namespace std;

class reva{
   int a,b;
   public:
    void printnumber(){
        cout<<"the number is "<<a<<" + "<<b<<"i"<<endl;
    }
    reva(void); //Constructor Declaration 
};
reva::reva(void){ // ----> This is a DEFAULT constructor as it takes NO parameters
    a=10;
    b=0;
}
int main(){
    reva r1,r2,r3;  //constructor automatically invoked
    r1.printnumber();
    r2.printnumber();
    r3.printnumber();
    return 0;
}