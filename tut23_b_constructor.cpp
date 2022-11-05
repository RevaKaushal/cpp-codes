#include<iostream>
using namespace std;

class point {
 int a,b;
 public:
  void display(){
    cout<<"the no. is "<<a<<" "<<b<<endl;
  }
  point(int,int); //constructor declaration
};

point::point(int x,int y){ //PARAMETERIALIZED constructor accepts TWO parameters 
    a=x;
    b=y;
}
int main(){
    //explicit call
    point p1=point(4,1);
    p1.display();
       
    //implicit call
    point p2(5,1);
    p2.display();
    return 0;
}