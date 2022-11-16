#include<iostream>
using namespace std;

class Base{
   protected: //PROTECTED ---> private members which can be inherited
   int a;
   private:
   int b;
};
class Derived: protected Base{};

/*                     Private derivation     Public derivation     Protected derivation
1. PRIVATE members     not inherited          not inherited         not inherited 
2. PUBLIC  members     private                public                protected 
3. PROTECTED members   private                protected             ptotected
*/
int main(){
    Base b;
    Derived d;
    //cout<<d.a; will throw error as A is inheritd as protected member
    return 0;
}