//ARRAYS --->block memory(contigous) containing similar data type here eg.Marks
#include<iostream>
using namespace std;

int main(){
   int marks[4]={2,3,4,5};
   //marks[3]=30;
   //cout<<marks[0]<<endl;
   //cout<<marks[1]<<endl;
   //cout<<marks[2]<<endl;
   //cout<<marks[3]<<endl;

    //for(int i=0; i<4; i++)
    //{
    //    cout<<"the value of marks "<<i<<"is "<<marks[i]<<endl;
    //}

    //POINTER AND ARRAYS 
    marks[0]=32;        //makes it_ marks={32,99,38,5}
    marks[1]=99;
    marks[2]=38;
    
    int*p= marks;        //[p is a POINTER HERE currently at index 0 ,of ARRAY marks]
    cout<<*(p++)<<endl;  //[p+1 pe hai ab pointer]
    cout<<*(++p)<<endl;  //[p+2 , pehle incriment honi hai position]

    cout<<"the value of *p "<<*p<<endl;
    cout<<"the value of *p+1 "<<*(p+1)<<endl;
    cout<<"the value of *p+2 "<<*(p+2)<<endl;
    cout<<"the value of *p+3 "<<*(p+3)<<endl; 

    return 0;
}