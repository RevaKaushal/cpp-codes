//******INTERCHANGING VALUES******

#include<iostream>
using namespace std;

//this DOESNT swap values of x and y...cuz this function just swaps its formal parameters and doesnt return any changes to actual parameters
void swap(int a,int b){   //temp a  b
    int temp=a;           //4    4  5
    a=b;                  //4    5  5
    b=temp;               //4    5  4
}

// call by refrence using POINTERS
void swappointer(int *a, int *b ){   //int *a=&x --->a is POINTER which holds the address of x
    int temp= *a;                    //int *b=&y --->b is POINTER which holds the address of y
    *a=*b;
    *b=temp;
}

// call by refrence using c++ REFRENCE VARIABLE
void swapRefrenceVar(int &a, int &b){      //int &a=x -->means a=x=4  ,look in tut3.cpp
    int temp=a;                            //int &b=y -->means b=y=5  ,& is refrence operator
    a=b;
    b=temp;
}

int main(){
    int x=4, y=5;
    cout<<"the value of x is "<<x<<" the value of y is "<<y<<endl;  
    //swap(x,y);            //this will not swap the values
    //swappointer(&x,&y);  //this will swap the values
    swapRefrenceVar(x,y);                                                  
    cout<<"the value of x is "<<x<<" the value of y is "<<y<<endl;
    return 0;
}