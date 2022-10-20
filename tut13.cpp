//********* FUNCTIONS, PROTOTYPING******

#include<iostream>
using namespace std;

/* int sum(int a ,int b){
    int c=a+b;
    return c;}  */

// type function-name (argument);           //function name could be anything
void g();
int sum(int a,int b);                        /*this is called PROTOTYPING ----> means ki hum comppiler ko bolrahe hai ki aage
int sun(int a,b)----->NOT acceptable           code mei sum function miljaega ..assurity to keep moving if the function 
int sum(int,int)----->acceptable               is defined AFTER main() function */ 
                          
int main(){                                   //main() function is always called FIRST ..
    int x,y;                                  //(a,b) --> FORMAL PARAMETERS...take values from actual parameters
    cout<<"the first no. is ";                //(x,y)---> ACTUAL PARAMETERS
    cin>>x;
    cout<<"the second no. is ";
    cin>>y; 
    cout<<"the sum of twoo digits is "<<sum(x,y)<<endl;      // here sum function is called 
    g();
    
    return 0;
}

int sum(int a, int b){
    return (a+b);
}

//g for greet                       
void g(){
    cout<<"hey hi good morning";
}