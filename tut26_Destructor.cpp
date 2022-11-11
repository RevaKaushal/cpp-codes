//this example will tell me WHEN and WHERE constructors and destructors are called
//DESTRUCTOR --> A destructor is a type of function which is called when the object is destroyed. 
//           --> Destructor never takes an argument nor does it return any value


#include<iostream>
using namespace std;

int count=0; //global variable
class num{
 public:
  num(){
    count++;
    cout<<"this is the time Constructor is called for object number"<<count<<endl;    
  }
  ~num(){    //DESTRUCTOR formed with ~
    cout<<"this is the time Destructor is called for object number"<<count<<endl;
    count--;
  }
};

int main(){
    cout<<"entering the main function "<<endl;
    cout<<"creating first object n1"<<endl;
    num n1;
    { //this is called BLOCK [isme ju bhi objects bne hai apne aap delete hojaenge after exiting this block]
        cout<<"entering this block"<<endl;
        cout<<"creating two more objects num2,num3"<<endl;
        num n2,n3; //now constructor is called
        cout<<"exiting this block"<<endl;
    }
    cout<<"back to main function"<<endl;
    return 0;    
}