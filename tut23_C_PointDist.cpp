// PROGRAM TO FIND DISTANCE BETWEEN TWO POINTS

#include<iostream>
#include<cmath>
using namespace std;

class dist{
 int x,y;
 public:
  void setnumber(int a,int b){
   x=a;
   y=b;
  }
  void display(){
    cout<<"the point is "<<"("<<x<<","<<y<<")"<<endl;
  }
  friend void distance(dist,dist);
};

void distance(dist d1,dist d2){
    float distt= (sqrt((pow((d1.x-d2.x),2))+(pow((d1.y-d2.y),2))));
    cout<<"the distance between two point is "<<distt;
}

int main(){
    dist d1,d2;
    d1.setnumber(4,2);
    d1.display();

    d2.setnumber(5,1);
    d2.display();

    distance(d1,d2);
    return 0;
}