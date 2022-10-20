//****RECURSIONS FUNCTIONS******
//calls itself multiple times within one function only like FACTORIAL,FIBONACCI series 

#include <iostream>
using namespace std;

int fib(int n){                    //fib(5)= fib(4)+ fib(3)
    if(n<2){                       //       = fib(2)+fib(3)+ fib(1)+fib(2) [repeatition not good]
        return 1;
    }
    return fib(n-2)+fib(n-1);
}

int factorial(int n){               // factorial of a number :
    if (n<=1){                      // 6!=6*5*4*3*2*1=720
        return 1;                   // 0!=1!=1
    }                               // n!= n*(n-1)!
    return n*factorial(n-1);
}

int main(){
    int a;
    cout<<"enter a number "<<endl;
    cin>>a;
    //cout<<"its factorial is "<<factorial(a);
    cout<<"the term in fibonacci series at position "<<a<<" is "<<fib(a);
    return 0;
}
    
    