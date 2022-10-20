//*****INLINE FUNCTIONS , DEFAULT ARGUMENTS *********

#include<iostream>
using namespace std;

inline int product(int a, int b){  //inline functions---> repeats whole function all the time it is called 
    static int c=0;                //This executes only once ...it initialises value of c as 0
    c=c+1;                         //Next time this function is run, the value of c will be retained
    return a*b+c;
}

float moneyrecieved(int currentmoney, float interest=1.04){  //interest has DEFAULT VALUE here 
    return currentmoney*interest;                            //default arguments should be at extreme rights
}

int main(){
    int a,b;
    //cout<<"the value of a and b are "<<endl;
    //cin>>a>>b;
    //cout<<"the product is "<<product(a,b)<<endl;
    //cout<<"the product is "<<product(a,b)<<endl;
    //cout<<"the product is "<<product(a,b)<<endl;
    
    int money=1000;
    cout<<"for the money "<<money<<"Rs you will recieve "<<moneyrecieved(money)<<endl;
    cout<<"for VIP the money "<<money<<"Rs vip will recieve "<<moneyrecieved(money, 1.1)<<endl;
    return 0;
}