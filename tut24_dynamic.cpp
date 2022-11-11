//DYNAMIC INITIALIZATION OF THE OBJECT

/*--The dynamic initialization of the object means that the object is initialized at the runtime
  --Dynamic initialization of the object using a constructor is beneficial when the data is of different formats
  --This is impo when there are MULTIPLE CONSTRUCTORS of the same class with DIFF INPUTS .
  --EX- simple interest calculation for diff format rates  */

#include<iostream>
using namespace std;

class bankdeposit{
 int principal; //private data members [Attributes]
 int year;
 float interestRate;
 float returnvalue;
 
 public:           //CONSTRUCTOR OVERLOADING
  bankdeposit(){}; //-->blank constructor impo hai for compiler to select which constructor to run for each object formed
  bankdeposit(int p, int y, int R);   
  bankdeposit(int p, int y, float r);
  void show(); 
};

bankdeposit::bankdeposit(int p, int y, int R){
    principal= p;
    year= y;
    interestRate= float (R)/100;
    returnvalue= principal;
    for(int i=0; i<y; i++){
        returnvalue= returnvalue*(1+interestRate);
    }
}
bankdeposit::bankdeposit(int p,int y, float r){
    principal= p;
    year= y;
    interestRate= r; 
    returnvalue=principal;                 
    for(int i=0; i<y; i++){                //returned amount = P+(PRT)/100 -->if rate is int
        returnvalue= returnvalue*(1+r);    //                = P+ PRT      -->if rate is float
    }
}
void bankdeposit::show(){
    cout<<"the amount returned for your investment "<<principal<<"Rs"
        <<" for "<<year<<"years"<<" is "<<returnvalue<<endl; 
}

int main(){
    bankdeposit b1,b2,b3;
    int p,y;                //variables used,should be defined in main function again(to make main func familiar to them)
    float r;
    int R;

    cout<<"enter p,y,r"<<endl;
    cin>>p>>y>>r;           
    b1=bankdeposit(p ,y, r);
    b1.show();

    cout<<"enter p,y,R"<<endl;
    cin>>p>>y>>R;
    b2=bankdeposit(p ,y ,R);
    b2.show();

    b3.show();

    return 0;
}