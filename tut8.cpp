#include<iostream>
using namespace std;

int main(){
    for (int i = 0; i < 10; i++)
    {
        //cout<<i<<" ";
        //if(i==2){
        //    break;              //break ENDS the code if condition is true
        //}                       //continue SKIPS code where condition is true 
        if(i==2){
            continue;
        }
        cout<<i<<" ";
    }
    return 0;
}