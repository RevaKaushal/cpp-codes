#include<iostream>
using namespace std;

typedef struct employee{     //STRUCURES mei memory share nhi hoti ..means saare data types ki memory
    int eid;       //4       //here total memory used is 9
    char favchar;  //1
    float salary;  //4
}ep;

union money{                 //UNION mei at a time eak hi data type ki memory use hoti hai .for eg think
    int rice;     //4        //of batar system..yaha pe in exchange of money you can use RICE or CAR or POUNDS
    char car;     //1        //ONE AT A TIME
    float pounds; //4        //maximum memory used here is 4
};

int main(){
    union money m1;
    m1.rice=34;
    m1.car='c';
    cout<<m1.rice;    //this 23 line will give us garbage value[99] cuz CAR is the current memory in use 
    cout<<m1.car; 
    
    struct employee reva;
    reva.eid=1;
    reva.salary=1200000;
    reva.favchar='c';  
    return 0;
}