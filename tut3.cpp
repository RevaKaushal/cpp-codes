#include<iostream>
using namespace std;
int main()
{
//****reference variable*****
float x=43;
float & y=x;
cout<<x<<endl;
cout<<y<<endl;

//****type casting******
int a=45;
float b=45.56;
cout<<int(b)<<endl;
cout<<(a+b)<<endl;
cout<<(a+int(b))<<endl;

//***operator precedence*****
int e=4, f=5;
int c=((((e*5)+f)-45)+47);
cout<<c;
return 0;
}
