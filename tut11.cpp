//***STRUCTURES*****            

#include<iostream>              //STRUCTURES =contain DIFFERENT data type
using namespace std;            //ARRAY      =contain SAME data type

typedef struct employee{        
    //data//                    // typedef mtlb (struct employee) can also be typed as (ep)
    int eid;
    char favchar;
    float salary;
}ep;

int main(){
    struct employee reva;        //kaafi employees ki detail can be stored in such way
    struct employee renu;
    ep rajiv;

    reva.eid =1;
    reva.favchar='c';
    reva.salary=12000000;
    cout<<"the value is "<<reva.eid<<endl;
    cout<<"the value is "<<reva.favchar<<endl;
    cout<<"the value is "<<reva.salary<<endl;

    return 0;
}