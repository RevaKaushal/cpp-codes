/* DERIVED CLASS SYNTAX
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
visibility modes are as follows:
PUBLIC  inheritance--> PUBLIC members of the base class becomes PUBLIC in derived class
PRIVATE inheritance--> PUBLIC members of the base class becomes PRIVATE in derived class
Default visibility mode is private
privat members are never inherited */


#include<iostream>
using namespace std;

class employee{ // BASE CLASS
    public:
    int  id;
    float salary;
    employee(){};            //DEFAULT constructor
    employee(int inpid){     //PARAMETERIALIAZED constructor 
       id=inpid;
       salary=34.6F;
    }
 };

class programmer: employee{  //DERIVED CLASS
    public:                  //default private inheritance 
     programmer(int inpid){
        id=inpid;
     }
     int languageCode=9;
     void getdata(){
        cout<<id<<endl;
     }
};

int main(){
    employee reva(1),revati(2);  //will automatically call the parameterialized contructor of employee class
    cout<<reva.salary<<endl;
    cout<<revati.salary<<endl;
    programmer p1(3);
    cout<<p1.languageCode<<endl;
    //cout<<p1.id;  this will throw error as id is inherited privately 
    p1.getdata();
    return 0;
  }