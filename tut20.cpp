//*******static variables and functions in c++*******

#include<iostream>
using namespace std;

class employee{
    int id;            //by default not mentioned things are PRIVATE in class
    //int count=0;     //har object ka apna count variable hai
    static int count;  //objects SHARE static variables 
    public:
    void setdata(void){
        cout<<"enter the employee id "<<endl;
        cin>>id;
        count++;
    }
    void getdata(void){
        cout<<"the employee id of emloyee no."<<count<<" is "<<id<<endl;
    }
    static void getcount(void){
        cout<<"the value of count is "<<count<<endl; //static function can only use static variables 
    }
 
};
//Count is static data member of class employee
int employee::count;

int main(){
    employee harry,reva,revati;  //harry,reva,revati are different objects of employee class
    //harry.id=1;                //will throw error as id and count are private
    //harry.count=1;
    harry.setdata();
    harry.getdata();
    employee::getcount();

    reva.setdata();
    reva.getdata();
    employee::getcount();

    revati.setdata();
    revati.getdata();
    employee::getcount();

    return 0;
}