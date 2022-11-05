//*****STRUCTURES AND CLASSES******
//refer tut11.cpp 

//c++ -->initially called --> c with classes by stroustroup
    //classes -->extention of structures(in c)
    //structures had limitATIONS --> members are public
    //                           --> no methods
    //classes --> structures + more 
    //        --> USER DEFINED DATA TYPE 
    //        --> can have methods and properties
    //        --> can make things public and private
    //        --> can declare objects along with class declarartion like
              /*   class employee{
                      [class defiition]
                   } reva, renu, papa  */

#include<iostream>
using namespace std;

class binary{
    string s;
    public: 
        void read(void);
        void chk_bin(void);
        void ones_complement(void);
        void display(void);
    }; 

void binary:: read(void){
    cout<<"enter a binary number"<<endl;
    cin>>s;
}

void binary:: chk_bin(void){
    for (int i=0; i<s.length(); i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"incorrect binary format"<<endl;
            exit(0);
        }
    }
}

void binary:: ones_complement(void){ //reversing the number
    for(int i=0; i<s.length(); i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else{ //else mei condition nhi aati
            s.at(i)='0';
        }
    }
}

void binary:: display(void){
    cout<<"displaying your binary number"<<endl;
    for(int i=0; i<s.length(); i++){
       cout<<s.at(i);
    }
    cout<<endl;
}

int main(){
    //******NESTING OF MEMBER FUNCTION******
    binary b;  //binary class mei simple eak number bnaya b
    b.read();
    b.chk_bin();
    b.display();
    b.ones_complement();
    b.display();
    return 0;
}