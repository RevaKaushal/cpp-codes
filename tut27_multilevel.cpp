#include <iostream>
using namespace std;

class student{ //CLASS A
    protected: //type of inheritence-->[private which can be inherited]
     int rollno;
    public:
     void setrollno(int);
     void getrollno();
};
void student::setrollno(int r){
    rollno=r;
}
void student::getrollno(){
    cout<<"the roll no of the student is "<<rollno<<endl;
}


class exam: public student{ //CLASS B
    public:
     float maths,physics;
    public:
     void setmarks(float m1,float p1){
        maths=m1;
        physics=p1;
     }
     void getmarks(){
        cout<<"marks in maths is "<<maths<<endl;
        cout<<"marks in physics is "<<physics<<endl;
     }
};


class result: public exam{ //CLASS C
    public:
     void display(){
        getrollno();
        getmarks();
        cout<<"the result is "<<(maths+physics)/2<<endl;
     }  
};

int main(){ //end mei teeno classes ka data inter-dependent hai 
    result Reva;
    Reva.setrollno(32);
    Reva.setmarks(98.6,99.7);
    Reva.display();
    return 0;
}

/*NOTES:
 if we are inheriting B from A and C from B [A-->B-->C]
 1. A is base class for B and B is base class for C 
 2. A-->B-->C is inheritance path]
 */