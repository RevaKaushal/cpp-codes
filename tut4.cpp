//MANUPILATORS IN C++ [ SETW()]
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a=3, b=45, c=1234;
    cout<<"value without setw is "<<a<<endl;
    cout<<"value without setw is "<<b<<endl;
    cout<<"value without setw is "<<c<<endl;

    cout<<"value of a"<<setw(5)<<a<<endl;
    cout<<"value of b"<<setw(5)<<b<<endl;
    cout<<"value of c"<<setw(5)<<c<<endl;

return 0;

}
