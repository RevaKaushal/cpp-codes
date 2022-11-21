#include <iostream >
using namespace std;

class base1{
    protected:
     int baseline1;
    public:
     void setbaseline1(int a){
      baseline1=a;
     }
};

class base2{
    protected:
     int baseline2;
    public:
     void setbaseline2(int b){
      baseline2=b;
     }
};

class derived: public base1, public base2{
    public:
     void display(){
        cout<<"baseline1 is "<<baseline1<<endl;
        cout<<"baseline2 is "<<baseline2<<endl;
        cout<<"the sum of two classes is "<<(baseline1+baseline2)<<endl;
     }
};

int main(){
    derived object;
    object.setbaseline1(60);
    object.setbaseline2(100);
    object.display();
    return 0;
}